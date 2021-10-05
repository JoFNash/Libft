#include "libft.h"

char	**ft_split(char const *s, char c)
{
	//char	**mass;
	size_t i;
	int count_c;
	int max_len;


	i = 0;
	max_len = 0;
	count_c = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0' && i < ft_strlen(s) - 1)
	{
		if (s[i] == c && s[i + 1] != 'c')
		{
			++count_c;
		}
		
		i++;
	}
	printf("%d", count_c);
	
	return (NULL);
}