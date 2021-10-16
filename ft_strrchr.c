#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;

	if (!s)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			tmp = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s); 
	return (tmp);
}