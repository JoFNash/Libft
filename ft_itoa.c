/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 21:41:06 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/25 21:41:06 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len_num(int num)
{
	int		len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	char	*number;
	int		len;
	int		i;

	len = len_num(num);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		number[0] = '-';
		number[len - 1] = (-1) * (num % 10) + '0';
		num = num / (-10);
		i = 1;
	}
	if (num == 0 && number[0] != '-')
		number[0] = '0';
	while (num != 0)
	{
		number[len - 1 - i++] = (num % 10) + '0';
		num /= 10;
	}
	number[len] = '\0';
	printf("num = %s\n", number);
	return (number);
}
