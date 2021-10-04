/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:32:50 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/04 21:39:11 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (!s1 && !s2)
		return (NULL);
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
			dest[j++] = s1[i++];
	}
	i = 0;
	if (s2)
	{
		while (s2[i])
			dest[j++] = s2[i++];
	}
	dest[j] = '\0';
	return (dest);
}
