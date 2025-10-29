#include "/home/w/Bureau/libft/include/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		size;
	int		i;
	char	*retour;

	size = ft_strlen(s);
	i = 0;
	retour = malloc(sizeof(char) * (size + 1));
	if (!retour)
		return (NULL);
	while (i < size)
	{
		retour[i] = f(i, s[i]);
		i++;
	}
	retour[i] = '\0';
	return (retour);
}
