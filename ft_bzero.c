#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	char	*p;
	

	if (!s)
		return;
	p = s;
	while (*p && n--)
	{
		*p = '\0';
		p++;
	}
}