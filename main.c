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

<<<<<<< HEAD
void    ft_print_result(char const *s)
{
    int     len;

    len = 0;
    while (s[len])
        len++;
    write(1, s, len);
}

int     main(int argc, const char *argv[])
{
    char    **tabstr;
    int     i;
    int     arg;


    if (argc == 1)
        return (0);
    i = 0;
    if ((arg = atoi(argv[1])) == 1)
    {
        if (!(tabstr = ft_split("          ", ' ')))
            ft_print_result("NULL");
        else
        {
            while (tabstr[i] != NULL)
            {
                ft_print_result(tabstr[i]);
                write(1, "\n", 1);
                i++;
            }
        }
    }
    else if (arg == 2)
    {
        if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
            ft_print_result("NULL");
        else
        {
            while (tabstr[i] != NULL)
            {
                ft_print_result(tabstr[i]);
                write(1, "\n", 1);
                i++;
            }
        }
    }
    else if (arg == 3)
    {
        if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
            ft_print_result("NULL");
        else
        {
            while (tabstr[i] != NULL)
            {
                ft_print_result(tabstr[i]);
                write(1, "\n", 1);
                i++;
            }
        }
    }
    else if (arg == 4)
    {
        if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
            ft_print_result("NULL");
        else
        {
            while (tabstr[i] != NULL)
            {
                ft_print_result(tabstr[i]);
                write(1, "\n", 1);
                i++;
            }
        }
    }
    else if (arg == 5)
    {
        if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
            ft_print_result("NULL");
        else
        {
            while (tabstr[i] != NULL)
            {
                ft_print_result(tabstr[i]);
                write(1, "\n", 1);
                i++;
            }
        }
    }
    else if (arg == 6)
    {
        if (!(tabstr = ft_split("", 'z')))
            ft_print_result("NULL");
        else
            if (!tabstr[0])
                ft_print_result("ok\n");
    }
    return (0);
}
=======
// void    ft_print_result(t_list *elem)
// {
//     int     len;
>>>>>>> cd43608ddb059f22ab4ea08ee4c742b30bc361a1

//     len = 0;
//     while (((char *)elem->content)[len])
//         len++;
//     write(1, ((char *)elem->content), len);
//     write(1, "\n", 1);
// }

<<<<<<< HEAD
=======
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
>>>>>>> cd43608ddb059f22ab4ea08ee4c742b30bc361a1
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