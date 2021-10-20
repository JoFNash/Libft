#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	//if (!lst)
	//	return;
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}