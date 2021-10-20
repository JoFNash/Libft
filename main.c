/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:21:17 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/05 21:58:11 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static void    ft_print_list(t_list * lst)
{
   while (lst != NULL)
   {
       printf("%s - ", lst->content);
       lst = lst->next;
   }
}

static void delete(void *content)
{
	free(content);
}

int     main(void)
{
    char str1[10] = "Hello!";
    char str2[10] = "world!";
    char str3[10] = "from";
    char str4[10] = "Helga";

    t_list *head = ft_lstnew(str1);
    t_list *new1 = ft_lstnew(str2);
    t_list *new2 = ft_lstnew(str3);
    t_list *new3 = ft_lstnew(str4);

    ft_lstadd_back(&head, new1);
    ft_lstadd_back(&head, new2);
    ft_lstadd_back(&head, new3);

    ft_print_list(head);
    return (0);
}