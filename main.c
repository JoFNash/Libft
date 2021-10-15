/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:21:17 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/05 21:58:11 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void foo(unsigned int i, char *c)
{
	if (i % 2) // если нечетная
		*c = *c + 32;
}

int main(void)
{
	//char string[100] = "QWERTY!";
	// ft_striteri(string, &foo);
	// printf("%s", string);
	//ft_putstr_fd(NULL, 2);
	//ft_putendl_fd("Hello", 1);
	//ft_putendl_fd("Hello", 1);
	ft_putnbr_fd(1234, 1);
	printf("\n");
	ft_putnbr_fd(-1234, 1);
	printf("\n");
	ft_putnbr_fd(0, 1);
	printf("\n");
	ft_putnbr_fd(-0, 1);
	printf("\n");
	ft_putnbr_fd(687989, 1);
	printf("\n");
	ft_putnbr_fd(-834783, 1);
	printf("\n");
	printf("%s", ft_itoa(0));
}