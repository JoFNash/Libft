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