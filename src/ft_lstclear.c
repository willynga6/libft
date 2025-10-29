#include "/home/w/Bureau/libft/include/libft.h"

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
