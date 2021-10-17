#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*pb;
	char	*pl;
	size_t	tmp_len;

	if (!big || len == 0)
		return (NULL);
	if (!little || ft_strncmp(little, "", ft_strlen(little)) == 0 )
		return ((char *)big);
	while (*big && len--)
	{
		if (*big == *little)
		{
			tmp_len = len;
			pb = (char *)big;
			pl = (char *)little;
			while (*pb == *pl && --len)
			{
				pl++;
				pb++;
			}
			if (*pl == '\0')
				return ((char *)big);
			len = tmp_len;
		}
		big++;
	}
	return (NULL);
}