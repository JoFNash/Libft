/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 17:18:11 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/22 17:18:11 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	result_len;

	if (size < ft_strlen(dest))
		return (1);											/*?*/
// 	if (size - ft_strlen(dst) - 1 > ft_strlen(src))
// 	{

// 	}
// }
}
