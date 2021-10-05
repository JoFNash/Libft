#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		len;

	copy = NULL;
	len = ft_strlen(s);
	copy = malloc(len);
	if (!copy)
	{
		free(copy);
		return (NULL);
	}
	while (len--)
	{
		*copy = *s;
		copy++;
		s++;
	}
	*copy = '\0';
	return (copy);
}