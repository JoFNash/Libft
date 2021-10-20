#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	del(*lst);
	free((*lst)->content);
	(*lst)->next = NULL;
	free(*lst);
}