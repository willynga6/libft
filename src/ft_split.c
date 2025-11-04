/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngambi <wngambi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:49:40 by wngambi           #+#    #+#             */
/*   Updated: 2025/11/04 09:49:41 by wngambi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**	Fonctionnelle
void	all_clear(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
	return ;
}
*/

// Fonctionnelle.
unsigned int	is_separator(char c, char separator)
{
	if (c == separator)
		return (1);
	return (0);
}

// Fonctionnelle
unsigned int	count_word(char const *s, char sep)
{
	unsigned int	count;
	int				in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (is_separator(*s, sep))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

// Fonctionnelle
char	*ft_strndup(char *s, int n)
{
	char	*copy;
	int		i;

	i = 0;
	if (*s == '\0' || !s)
	{
		copy = malloc(1);
		*copy = '\0';
		return (copy);
	}
	copy = malloc(sizeof(char) * (n + 1));
	if (!copy)
		return (NULL);
	while (i < n)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

// Fonctionnelle
char	**fill_array(char **array, char const *s,

unsigned int nb_word, char sep)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	array = malloc(sizeof(char *) * (nb_word + 1));
	if (!array)
		return (NULL);
	while (*s && i < nb_word)
	{
		while (*s && is_separator(*s, sep))
			s++;
		len = 0;
		while (s[len] && !is_separator(s[len], sep))
			len++;
		if (len)
		{
			array[i] = ft_strndup((char *)s, len);
			if (!array[i++])
				return (NULL);
			s += len;
		}
	}
	array[i] = NULL;
	return (array);
}

// Fonctionnelle
char	**ft_split(char const *s, char c)
{
	char	**array;

	array = NULL;
	return (fill_array(array, s, count_word(s, c), c));
	if (!array)
		return (NULL);
	return (array);
}
