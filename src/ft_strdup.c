#include "/home/w/Bureau/libft/include/libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	unsigned int	size;
	unsigned int	i;
	char			*copy;

	size = ft_strlen(s);
	copy = malloc(size + 1);
	if (!copy)
		return (NULL);
	i = 0;
	while (i < size)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
