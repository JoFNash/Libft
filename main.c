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
#include <string.h>


int main(void)
{
	//char string[100] = "destination";
	char string1[100] = "-12345";
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "0\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "  -30\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "  - 70\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "  ++90\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "  --30\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "  +-30a1\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "  -309a1\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "2147483647\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "-2147483647\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "-2147483648\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));

	strcpy(string1, "2147483648\0");
	printf("%d ", ft_atoi(string1));
	printf("%d\n", atoi(string1));
}