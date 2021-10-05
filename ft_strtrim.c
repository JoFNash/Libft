#include "libft.h"

void 	check_sym(char const *string, char const *set, int *flag, int len)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (string[0] == set[i])
			flag[0] = 1;
		if (string[len - 1] == set[i])
			flag[1] = 1;
		if (flag[0] && flag[1])
			break;
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	i; 
	size_t	j;
	int		flag[2];

	if (!s1 || !set)
		return (NULL);
	flag[0] = 0;
	flag[1] = 0;
	i = 0;
	len = ft_strlen(s1);
	check_sym(s1, set, flag, len);
	len = len - (flag[0] + flag[1]);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	j = flag[0];
	i = 0;
	while ((len--) != 0)
		str[i++] = s1[j++];
	str[i] = '\0';
	return (str);
}