#include "libft.h"

static	int	new_len_num(int num)
{
	int		len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

char	*new_itoa(int num)
{
	char	*number;
	int		len;
	int		i;

	len = new_len_num(num);
	number = (char *)malloc(sizeof(char) * (len + 1));
	if (!number)
		return (NULL);
	i = 0;
	if (num < 0)
	{
		number[0] = '-';
		number[len - 1] = (-1) * (num % 10) + '0';
		num = num / (-10);
		i = 1;
	}
	if (num == 0)
		number[0] = '0';
	while (num != 0)
	{
		number[len - 1 - i++] = (num % 10) + '0';
		num /= 10;
		//i++;
	}
	number[len] = '\0';
	return (number);
}