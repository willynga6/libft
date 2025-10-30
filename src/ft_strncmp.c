#include "/home/w/Bureau/libft/include/libft.h"

/*	
**	Ne pas oublier la comparaison avec le caractère de fin
**	Convertir les char en unsigned char afin que aucun caractere
**	ne deviennent négatif et ne fausse les comparaisons
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

