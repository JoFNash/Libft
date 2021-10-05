#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**mass;
	size_t i;
	int count_c;
	int max_len;
	

	i = 0;
	max_len = 0;
	count_c = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			++count_c;
		i++;
	}
	mass = (char **)malloc(sizeof(char *) * count_c); // здесь не нужна + единица?
	if (!mass)
		return (NULL);
	
	return (NULL);
}