#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (ft_isdigit(c)))
		return (1);
	return (0);
}