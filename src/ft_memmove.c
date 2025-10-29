#include "/home/w/Bureau/libft/include/libft.h"

/*
**	Cas de chevauchement de dest par l'avant
**	On copie dr droite à gauche
**	Sinon on copie normalement
*/
void	*ft_memmove(void *destination, const void *source, size_t size)
{
	unsigned char		*dest;
	const unsigned char	*src;
	size_t				i;

	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	if (!dest && !src)
		return (NULL);
	if (!size)
		return (dest);
	if (src < dest && dest < (src + size))
	{
		i = size;
		while (i-- > 0)
			dest[i] = src[i];
		return (dest);
	}
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
