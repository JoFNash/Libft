#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int 	number;
	int		sign;
	size_t	i;

	if (!nptr)
		return (0);
	sign = 0;
	i = 0;
	number = 0;
	while (nptr[i] == ' ' || nptr[i] == '\f' || nptr[i] == '\n' \
	|| nptr[i] == '\r' || nptr[i] == '\t' || nptr[i] == '\v')
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	if (sign == -1)
		number *= -1;
	return (number);
}