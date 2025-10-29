#include "/home/w/Bureau/libft/include/libft.h"
/*
**	lst = adresse de la liste
**	*lst = premier maillon de la liste (adresse)
**	**lst = Accès à la strcture (ex: (*lst)->content;
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
