#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	return(ft_memmove(dest, src, n)); // не втыкаю, в чем смысл сей функции если есть ft_memmove? можно ли ее написать так?
}