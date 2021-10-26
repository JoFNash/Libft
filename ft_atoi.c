/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:16:11 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/22 17:16:11 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' 
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	tmp_num;
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		tmp_num = number;
		number = number * 10 + (*str - '0');
		if ((tmp_num != (number - (*str - '0')) / 10) && sign == 1)
			return (-1);
		else if ((tmp_num != (number - (*str - '0')) / 10) && sign == -1)
			return (0);
		str++;
	}	
	return ((int)(sign * number));
}
