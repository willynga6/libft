/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngambi <wngambi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:50:10 by wngambi           #+#    #+#             */
/*   Updated: 2025/11/10 14:12:33 by wngambi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	
**	Ne pas oublier d'inclure le caractère de fin de chaîne
**	Dans la comparaison acvec c
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurence;
	int		find;

	find = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			last_occurence = (char *)s;
			find++;
		}
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	if (find)
		return (last_occurence);
	return (NULL);
}
