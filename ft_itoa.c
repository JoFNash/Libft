/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:16:54 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/22 17:16:54 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	len_num(int num)
{
	int		len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static void	check_sign(int *num, int *len, int *sign)
{
	if ((*num) < 0)
	{
		(*len)++;
		(*sign) = -1;
		(*num) = (*num) * (-1);
	}
}

static char *ft_strncpy(char *dest, char *src, int n)
{
	dest = (char *)malloc(sizeof(char) * n);
	if (!dest)
		return (NULL);
	else
	{
		dest = ft_memcpy(dest, src, n);
		if (!dest)
			return (NULL);
	}
	return (dest);
}

static int	check_ZERO_and_INT_MIN(int num, char *number)
{
	number = NULL;
	if (num == 0)
	{
		number = ft_strncpy(number, "0\0", 2);
		if (!number)
			return (0);
	}
	else if (num == -2147483648)
	{
		number = ft_strncpy(number, "-2147483648", 12);
		if (!number)
			return (0);
	}
	return (1);
}

char	*ft_itoa(int num)
{
	char	*number;
	int		i;
	int		len;
	int		sign;

	number = NULL;
	sign = 1;
	if (!num)
		return (NULL);
	if (!check_ZERO_and_INT_MIN(num, number))
		return (NULL);
	else
		return (number);
	len = len_num(num);
	check_sign(&num, &len, &sign);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	i = 0;
	while (i < len)
	{
		number[len - 1 - i] = (num % 10 + '0');
		num /= 10;
		i++;
	}
	if (sign < 0)
		number[0] = '-';
	number[i] = '\0';
	return (number);
}
