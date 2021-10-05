/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:17:32 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/05 15:12:39 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s); 
	if (start > size)
		return (NULL);
	if (len > size)
		return (NULL);
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = start;
	j = 0;
	while (i < size && (len--) != 0)
	{
		substr[j++] = s[i++];
	}
	substr[i] = '\0';
	return (substr);
}
