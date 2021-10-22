/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:17:32 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/22 17:56:06 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	i;
	size_t	j;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start > size)
		len = 0;
	if (len > size)
		string = (char *)malloc(sizeof(char) * (size + 1));
	else
		string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	i = start;
	j = 0;
	while (i < size && (len--) != 0)
	{
		string[j++] = s[i++];
	}
	string[j] = '\0';
	return (string);
}
