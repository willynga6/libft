#include "/home/w/Bureau/libft/include/libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*copy;

	if (!new || !lst)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	copy = *lst;
	while (copy->next != NULL)
		copy = copy->next;
	copy->next = new;
}
