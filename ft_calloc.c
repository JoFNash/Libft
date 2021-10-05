#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;
	size_t	i;

	mem = (void *)malloc(size * count);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		((unsigned char *)mem)[i] = '\0';
		i++;
	}
	return (mem);
}