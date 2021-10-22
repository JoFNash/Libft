/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:17:35 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/22 17:17:35 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*copy_dest;
	const unsigned char		*copy_src;
	unsigned int			i;
	unsigned char			array[BUFSIZ];

	if (!dest && !src)
		return (NULL);
	i = 0;
	copy_dest = dest;
	copy_src = src;
	while (i < n)
	{
		array[i] = *copy_src;
		copy_src++;
		i++;
	}
	i = 0;
	while (i < n)
	{
		*copy_dest = array[i];
		copy_dest++;
		i++;
	}
	return (dest);
}
