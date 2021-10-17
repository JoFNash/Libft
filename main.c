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

void    ft_print_result(int n)
{
    if (n > 0)
        write(1, "1", 1);
    else if (n < 0)
        write(1, "-1", 2);
    else
        write(1, "0", 1);
}

int     main(void)
{
    printf("%c\n", '\200');
    printf("%d\n", '\200');
    printf("%c\n", '\0');
    printf("%d\n", '\0');
    printf("%c\n", '\200' - '\0');
    printf("%c\n", (unsigned char)'\200' - (unsigned char)'\0');
    printf("%d\n", (unsigned char)'\200' - (unsigned char)'\0');
    printf("%d\n", '\200' - '\0');
    return (0);
}