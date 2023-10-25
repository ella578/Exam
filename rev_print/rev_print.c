/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 15:44:38 by ewang             #+#    #+#             */
/*   Updated: 2023/09/15 15:58:47 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Write function that prints  a string but in reverse order. It must return its parameter. Beware that the string wont be modifiable. your function must be declared as follows: 
char  *rev_print(char   *str); 


#include <unistd.h>
#include <stdio.h>

char *re_print(char *str)
{
        int     i = 0;

        while(str[i])
                i++;
        while(i)
                write(1, &str[--i],1);
        return(str);
}

int     main(int ac, char **av)
{
        if (ac == 2)
        re_print(av[1]);
                        write (1, "\n", 1);
        return(0);
}

-----------------------------------------------------------------------
char *rev_print(char *str)
{
    if (*str)
    {
        rev_print(str + 1);
        write(1, str, 1);
    }

    return (str);
}
--------------------------------

