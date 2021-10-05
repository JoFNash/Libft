#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;
	unsigned char tmp_c;

	p = (unsigned char *)s;
	tmp_c = (unsigned char) c;
	while (n-- && *p)
	{
		if (*p == tmp_c)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}