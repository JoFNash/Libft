#include "libft.h"

int		len_num(int num)
{
	int		len;

	len = 0;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

void	check_sign(int *num, int *len, int *sign)
{
	if ((*num) < 0)
	{
		(*len)++;
		(*sign) = -1;
		(*num) = (*num) * (-1);
	}
}

char	*ft_itoa(int num)
{
	char	*number;
	int		i;
	int		len;
	int		sign;

	sign = 1;
	if (num == 0)
		return ("0\0");
	len = len_num(num);
	if (num == -2147483648)
		return ("-2147483648\0"); // тут нужно '\0'?
	check_sign(&num, &len, &sign);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	i = 0;
	while (i < len)
	{
		number[len - 1 - i] = (num % 10 + '0');
		num /= 10;
		i++;
	}
	if (sign < 0)
		number[0] = '-';
	number[i] = '\0';
	return (number);
}