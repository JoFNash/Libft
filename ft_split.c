#include "libft.h"

// с может = '\0'?

int get_num_words(char const *s, char c)
{
	size_t	i;
	int		words;

	words = 0;
	i = 0;
	if (s[0] != c)
			++words;
	while (s[i + 1] != '\0' && i < ft_strlen(s) - 1)
	{
		if (s[i] == c && s[i + 1] != c)
		{
			++words;
		}
		i++;
	}
	//printf("\nwords = %d\n", words);
	return (words);
}

void alloc_mem(char **mass, int length, size_t *k) // для каждого слова выделяет память точно правильно
{
	//printf("length of word =  %d\n", length);
	mass[*k] = (char *)malloc(sizeof(char) * (length + 1));
	if (!mass[*k])
	{
		while ((*k)--)
		{
			free(mass[*k]);
		}
		free(mass);
	}
	(*k)++;
}

void get_mem_for_words(char const *s, char c, char **mass)
{
	int 	length;
	size_t	i;
	size_t 	k;

	k = 0;
	i = 0;
	while (s[i] != '\0')
	{
		length = 0;
		if (s[i] == c)
		{
			i++;
		}
		else if (s[i] != c)
		{
			if (s[i] == '\0')
				break;
			while (s[i] != c && s[i] != '\0')
			{
				length++;
				i++;
			}
		}
		if (length != 0)
			alloc_mem(mass, length, &k);
	}
}

char	**get_mass(char const *s, char c, char **mass)
{
	size_t	i;
	size_t	j;
	size_t 	k;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			//printf("s[%d] = %c\n", i, s[i]);
			i++;
		}
		else if (s[i] != c)
		{
			if (s[i] == '\0')
			{
				//printf("break! \'\0\' is here!");
				return (mass);
			}
			k = 0;
			while (s[i] != c && s[i] != '\0')
			{
				mass[j][k] = s[i];
				//printf("mass[%d][%d] = %c\n", j, k, mass[j][k]);
				i++;
				k++;
			}
			mass[j][k] = '\0';
			//printf("mass[%d][%d] = %c (null)\n", j, k, mass[j][k]);
			j++;
			//printf("s[i] = %c\n", s[i]);
		}
	}
	return (mass);
}

char	**ft_split(char const *s, char c)
{
	char	**mass;
	int		words;

	if (!s)
		return (NULL);
	printf("1");
	words = get_num_words(s, c);
	printf("2");

	mass = (char **)malloc(sizeof(char *) * words);
	if (!mass)
		return (NULL);
	printf("3");

	get_mem_for_words(s, c, mass);
	printf("4");

	mass = get_mass(s, c, mass);
	printf("5");

	return (mass);
}