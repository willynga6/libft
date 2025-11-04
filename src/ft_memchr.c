/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngambi <wngambi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:29:38 by wngambi           #+#    #+#             */
/*   Updated: 2025/11/04 09:29:39 by wngambi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void*s, int c, size_t n)
{
	unsigned char	*search;
	size_t			i;

	search = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*search == (unsigned char)c)
			return (search);
		i++;
		search++;
	}
	return (NULL);
}
