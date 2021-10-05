#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char*			copy_dest;
	const unsigned char*	copy_src;
	unsigned char			array[BUFSIZ]; // тут можно задать массив так...? 
	unsigned int			i;

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