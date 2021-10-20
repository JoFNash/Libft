#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	*number_str;

	number_str = ft_itoa(n);
	ft_putstr_fd(number_str, fd);
}