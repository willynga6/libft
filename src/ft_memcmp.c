#include "/home/w/Bureau/libft/include/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*uno;
	unsigned char	*deux;

	i = 0;
	uno = (unsigned char *)s1;
	deux = (unsigned char *)s2;
	while (i < n)
	{
		if (uno[i] != deux[i])
			return (uno[i] - deux[i]);
		i++;
	}
	return (0);
}
