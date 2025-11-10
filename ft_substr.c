/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngambi <wngambi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:50:15 by wngambi           #+#    #+#             */
/*   Updated: 2025/11/10 16:47:41 by wngambi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*copy;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		copy = malloc(1);
		if (!copy)
			return (NULL);
		*copy = '\0';
		return (copy);
	}
	if (start + (unsigned int)len > ft_strlen(s))
		len = ft_strlen(s) - start;
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy || !s)
		return (NULL);
	while (i < len)
	{
		copy[i] = s[start + i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
