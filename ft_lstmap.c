#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp_lst;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		tmp_lst = ft_lstnew(f(lst->content));
		if (!tmp_lst)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		else
		{
			ft_lstadd_back(&new_list, tmp_lst);

		}
		lst = lst->next;
	}
	return (new_list);
}
