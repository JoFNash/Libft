/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:21:17 by hsybassi          #+#    #+#             */
/*   Updated: 2021/10/22 18:06:28 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *i1 = ft_itoa(-623);
	char *i2 = ft_itoa(156);
	char *i3 = ft_itoa(-0);

	if (strcmp(i1, "-623"))
	{
			printf("ploha");
	}
	if (strcmp(i2, "156"))
	{
			printf("ploha");
	}
	if (strcmp("0", i3))
	{
			printf("ploha");
	}
	printf("ok");
    return (0);
}


	// char *s1 = "AAAAAA";
	// size_t max = strlen(s1);
	// char *i1 = strnstr(s1, s1, max);
	// char *i2 = ft_strnstr(s1, s1, max);

	// if (i1 == i2)
	// 	printf("YES\n");
	// else
	// 	printf("NO\n");

	// printf("i1 = %s\n", i1);
	// printf("i2 = %s\n", i2);


// t_list  *ft_lstnewone(void *content)
// {
//     t_list  *elem;

//     elem = (t_list *)malloc(sizeof(t_list));
//     if (!elem)
//         return (NULL);
//     if (!content)
//         elem->content = NULL;
//     else
//         elem->content = content;
//     elem->next = NULL;
//     return (elem);
// }

// void    *ft_map(void *ct)
// {
//     int i;
//     void    *c;
//     char    *pouet;

//     c = ct;
//     i = -1;
//     pouet = (char *)c;
//     while (pouet[++i])
//         if (pouet[i] == 'o')
//             pouet[i] = 'a';
//     return (c);
// }

// void    ft_del(void *content)
// {
//     free(content);
// }

// int main(int argc, const char *argv[])
// {
//     t_list      *elem;
//     t_list      *elem2;
//     t_list      *elem3;
//     t_list      *elem4;
//     t_list      *list;
//     char        *str = strdup("lorem");
//     char        *str2 = strdup("ipsum");
//     char        *str3 = strdup("dolor");
//     char        *str4 = strdup("sit");

//     elem = ft_lstnewone(str);
//     elem2 = ft_lstnewone(str2);
//     elem3 = ft_lstnewone(str3);
//     elem4 = ft_lstnewone(str4);

//     if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
//         return (0);
//     elem->next = elem2;
//     elem2->next = elem3;
//     elem3->next = elem4;
//     if (atoi(argv[1]) == 1)
//     {
//         if (!(list = ft_lstmap(elem, &ft_map, &ft_del)))
//             return (0);
//         if (list == elem)
//             write(1, "A new list is not returned\n", 27);
//         int i;
//         i = 0;
//         ft_print_result(list);
//         while (list->next)
//         {
//             list = list->next;
//             ft_print_result(list);
//             i++;
//         }
//     }
//     return (0);
// }
//
// static void    ft_print_list(t_list * lst)
// {
//    while (lst != NULL)
//    {
//        printf("%s - ", lst->content);
//        lst = lst->next;
//    }
// }

// static void delete(void *content)
// {
// 	free(content);
// }

// void    *f(void *content)
// {
//     return (content);
// }

// int     main(void)
// {
//     char str1[10] = "Hello!";
//     char str2[10] = "world!";
//     char str3[10] = "from";
//     char str4[10] = "Helga";

//     t_list *list;

//     t_list *head = ft_lstnew(str1);
//     t_list *new1 = ft_lstnew(str2);
//     t_list *new2 = ft_lstnew(str3);
//     t_list *new3 = ft_lstnew(str4);

//     ft_lstadd_back(&head, new1);
//     ft_lstadd_back(&head, new2);
//     ft_lstadd_back(&head, new3);

//     list = ft_lstmap(head, f, delete);
//     ft_print_list(list);
//     return (0);
// }