#include "/home/w/Bureau/libft/include/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_maillon;

	new_list = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_maillon = ft_lstnew(f(lst->content));
		if (!new_maillon)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_maillon);
		lst = lst->next;
	}
	return (new_list);
}
