#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dest);
	while (i < size)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return(ft_strlen(dest) + ft_strlen(src));
}