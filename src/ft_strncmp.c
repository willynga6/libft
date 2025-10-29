#include "/home/w/Bureau/libft/include/libft.h"

/*	Ne pas oublier la comparaison avec le caractère de fin */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((int)s1[i] - (int)s2[i]);
		if (s1[1] == '\0' && s2[1] == '\0')
			break ;
		i++;
	}
	return (0);
}
