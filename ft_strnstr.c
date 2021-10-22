/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:18:29 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/22 17:18:29 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*pb;
	char	*pl;
	size_t	tmp_len;

	if (!big && !little)
		return (NULL);
	if (*little == 0)
		return ((char *)big);
	while (*big && len--)
	{
		if (*big == *little)
		{
			tmp_len = len;
			pb = (char *)big;
			pl = (char *)little;
			while (*pb == *pl && --len)
			{
				pl++;
				pb++;
			}
			if (*pl == '\0')
				return ((char *)big);
			len = tmp_len;
		}
		big++;
	}
	return (NULL);
}
