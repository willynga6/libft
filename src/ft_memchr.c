#include "/home/w/Bureau/libft/include/libft.h"

void	*ft_memchr(const void*s, int c, size_t n)
{
	unsigned char	*search;
	size_t			i;

	search = (unsigned char *)s;
	i = 0;
	if (!search)
		return (NULL);
	while (i < n)
	{
		if (*search == (unsigned char)c)
			return (search);
		i++;
		search++;
	}
	return (NULL);
}
