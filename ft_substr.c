/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:17:32 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/26 18:39:51 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;
	size_t	s_len;
	size_t	size;

	s_len = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		s_len = 0;
	else if (start + len > size)
		s_len = size - start;
	else
		s_len = len;
	string = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!string)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		string[i] = s[i + start];
		i++;
	}
	string[i] = '\0';
	return (string);
}
