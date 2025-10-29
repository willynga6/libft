#include "/home/w/Bureau/libft/include/libft.h"

int	count_nb(int nb)
{
	long int	n;
	int			count;

	n = nb;
	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int nb)
{
	char		*digits;
	long int	n;
	int			size;

	n = nb;
	size = count_nb(n);
	digits = malloc(sizeof(char) * (size + 1));
	if (!digits)
		return (NULL);
	digits[size--] = '\0';
	if (n < 0)
	{
		digits[0] = '-';
		n = -n;
	}
	while (digits[size] != '-' && size >= 0)
	{
		digits[size--] = (n % 10 + '0');
		n = n / 10;
	}
	return (digits);
}
