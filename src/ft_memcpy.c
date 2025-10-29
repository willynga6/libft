#include "/home/w/Bureau/libft/include/libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t			i;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	i = 0;
	if (source == destination)
		return (destination);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (destination);
}
