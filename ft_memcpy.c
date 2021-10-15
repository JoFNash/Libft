#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char*			copy_dest;
	const unsigned char*	copy_src;

	copy_dest = dest;
	copy_src = src;
	while (n--)
	{
		*copy_dest = *copy_src;
		copy_src++;
		copy_dest++;
	}
	return (dest);
}