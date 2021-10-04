/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:17:32 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/04 21:33:43 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s) || start + len > ft_strlen(s))
		return (NULL);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen((char *)s))
		substr[j++] = s[i++];
	substr[i] = '\0';
	return (substr);
}
