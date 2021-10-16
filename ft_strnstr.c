#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*pb;
	char	*pl;

	if (!big || !little)
		return (NULL);
	while (*big)
	{
		if (*big == *little)
		{
			pb = (char *)big;
			pl = (char *)little;
			while (*pb == *pl && --len)
			{
				pl++;
				pb++;
				//printf("*pb = %c ", *pb);
				//printf("*pl = %c\n", *pl);
			}
			if (len == 0)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}