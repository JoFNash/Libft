#include "libft.h"

int		ft_isalpha(int c)
{
	if (ft_toupper(c) || ft_tolower(c))
		return (1);
	return (0);
}