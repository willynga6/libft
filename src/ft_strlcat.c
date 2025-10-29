#include "/home/w/Bureau/libft/include/libft.h"

/*
**  Retourne la longueur total de la chaîne
**  Dans le cas où le buffer est assez grand
**  Pour tout concaténer
*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	j;

	if (!dest && size == 0)
		return (ft_strlen(src));
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	i = dlen;
	j = 0;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dlen + slen);
}
