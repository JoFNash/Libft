/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:18:32 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/22 17:18:32 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	if (!s)
		return (0);
	tmp = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *) s);
	return (tmp);
}
