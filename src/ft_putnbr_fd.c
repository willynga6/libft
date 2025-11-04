/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngambi <wngambi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:49:35 by wngambi           #+#    #+#             */
/*   Updated: 2025/11/04 09:49:36 by wngambi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	nb;
	char		solo;
	int			suivant;

	nb = n;
	if (nb < 0)
	{
		nb = -nb;
		write(fd, "-", 1);
	}
	solo = (nb % 10) + '0';
	suivant = nb / 10;
	if (nb > 9)
		ft_putnbr_fd(suivant, fd);
	write(fd, &solo, 1);
}
