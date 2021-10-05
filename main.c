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
int main(void)
{
	char 	str1[30] = "     1 234 56789  ";
	//char 	set[30] = "12 33 294";
	char c = ' ';
	//char 	*substr;
	//substr = ft_substr(str, 0, 100);
	//printf("%s   %s\n", str, substr);
	//printf("%s\n", ft_strjoin("123456789", NULL));
	//printf("%s\n", ft_strjoin("123456789", "hello"));
	//printf("%s\n", ft_strjoin("123456789", "y"));
	//printf("%s\n", ft_strjoin("123456789", ""));
	//printf("%s", ft_strtrim(str1, set));
	//char * p = ft_calloc(5, 3);
	//printf("%s %lu", p, sizeof(p));
	ft_split(str1, c);
	
}