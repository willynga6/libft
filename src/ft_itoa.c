/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngambi <wngambi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:27:11 by wngambi           #+#    #+#             */
/*   Updated: 2025/11/04 09:27:12 by wngambi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	count_nb(long int n)
{
	int	count;

	count = (n <= 0);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/*
**	Il faut traiter le cas
**	de l'index 0 de digits à part !
** selon qu'il y'ait un signe ou non
*/
char	*ft_itoa(int nb)
{
	char		*digits;
	long int	n;
	int			size;

	n = (long)nb;
	size = count_nb(n);
	digits = malloc(sizeof(char) * (size + 1));
	if (!digits)
		return (NULL);
	digits[size--] = '\0';
	if (n < 0)
	{
		digits[0] = '-';
		n = -n;
	}
	while (size > 0)
	{
		digits[size--] = (n % 10 + '0');
		n = n / 10;
	}
	if (digits[0] != '-')
		digits[0] = (n % 10) + '0';
	return (digits);
}
