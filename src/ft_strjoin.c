/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngambi <wngambi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:49:50 by wngambi           #+#    #+#             */
/*   Updated: 2025/11/04 09:49:51 by wngambi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*remplissage(char const *s1, char const *s2)
{
	unsigned int	i;
	char			*copie;

	i = 0;
	copie = malloc((sizeof(char) * (ft_strlen(s1) + ft_strlen(s2))) + 1);
	if (!copie)
		return (NULL);
	i = 0;
	while (*s1)
	{
		copie[i++] = *s1;
		s1++;
	}
	while (*s2)
	{
		copie[i++] = *s2;
		s2++;
	}
	copie[i] = '\0';
	return (copie);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*copie;

	if (!s1 || !s2)
		return (NULL);
	if (*s1 == '\0' && *s2 == '\0')
	{
		copie = malloc(1);
		if (!copie)
			return (NULL);
		copie[0] = '\0';
		return (copie);
	}
	copie = remplissage(s1, s2);
	return (copie);
}
