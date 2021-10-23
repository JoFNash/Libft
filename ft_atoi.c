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

int	ft_atoi(const char *nptr)
{
	long long int		number;
	int		sign;
	size_t	i;

	if (!nptr)
		return (0);
	sign = 0;
	i = 0;
	number = 0;
	while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n' \
	|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	// непонятненько
	if (sign == -1)
		number *= -1;
	// if (number > INT_MAX)
	// 	return (-1); // это так должно работать?
	// else if (number < INT_MIN)
	// 	return (0);
	return (number);
}
