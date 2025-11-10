/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wngambi <wngambi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:29:13 by wngambi           #+#    #+#             */
/*   Updated: 2025/11/10 14:13:54 by wngambi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*nettoyeur;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		nettoyeur = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = nettoyeur;
	}
	*lst = NULL;
}
