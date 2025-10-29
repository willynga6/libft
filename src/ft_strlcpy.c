#include "/home/w/Bureau/libft/include/libft.h"

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;

	slen = ft_strlen(src);
	if (size == 0)
		return (slen);
	i = 0;
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (slen);
}
