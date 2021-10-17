#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	if (!s)
		return;
	p = s;
	while (n--)
	{
		*p = '\0';
		p++;
	}
}