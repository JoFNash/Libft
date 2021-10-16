#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t len;

	len = ft_strlen(src);
	if (!dest || !src)
		return (0);
	if (size - 1 > len)
	{
		ft_memcpy(dest, src, len + 1);
		dest[len - 1] = '\0';
	}
	else
	{
		ft_memcpy(dest, src, size - 1);
		dest[size - 1] = '\0';
	}
	return (len);
}