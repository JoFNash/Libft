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
	size_t	len_big;
	size_t	len_little;
	size_t	i;

	i = 0;
	if (!big && !little)
		return (NULL);
	if (*little == 0)
		return ((char *)big);
	len_big = ft_strlen(big);
	len_little = ft_strlen(little);
	if ((int)len_big - (int)len_little >= 0)
	{
		// printf("i = %lu\n", i);
		// printf("len = %lu\n", len);
		// printf("i + len_little = %lu\n", i + len_little);
		// printf("len = %lu\n", len);
		// printf("len_big - len_little = %lu\n", len_big - len_little);

		while ((i <= len_big - len_little) && (len--) && (i + len_little <= len))
		{
			// printf("HEY\n");
			if (ft_strncmp(&(big[i]), little, ft_strlen(little)) == 0)
				return ((char *)&(big[i]));
			i++;
		}
	}
	return (NULL);
}
	//char	*pb;
	//char	*pl;
	//size_t	tmp_len;

	// if (!big && !little)
	// 	return (NULL);
	// if (*little == 0)
	// 	return ((char *)big);
	// while (*big && len--)
	// {
	// 	if (*big == *little)
	// 	{
	// 		tmp_len = len;
	// 		pb = (char *)big;
	// 		pl = (char *)little;
	// 		while (*pb == *pl && --len)
	// 		{
	// 			pl++;
	// 			pb++;
	// 		}
	// 		if (*pl == '\0')
	// 			return ((char *)big);
	// 		len = tmp_len;
	// 	}
	// 	big++;
	// }