/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:21:17 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/04 22:20:30 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int main(void)
{
	//char str[30] = "Hello world!";
	//char * substr;
	//substr = ft_substr(str, 3, 7);
	//printf("%s   %s\n", str, substr);
	printf("%s\n", ft_strjoin("21414124", NULL));
	printf("%s\n", ft_strjoin("21414124", "hello"));
	printf("%s\n", ft_strjoin("21414124", "y"));
	printf("%s\n", ft_strjoin("21414124", ""));
	
}