/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:52:50 by ewang             #+#    #+#             */
/*   Updated: 2023/09/16 17:06:56 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void inter(char *str1, char *str2)
{
    int i;
    int j;
    int ascii[256] = {0};

    i = 0;
    while (str2[i])
    {
        if (ascii[(int)str2[i]] == 0)
            ascii[(int)str2[i]] = 1;
        i++;
    }

    i = 0;
    j = 0;
    while (str1[i])
    {
        if (ascii[(int)str1[i]] == 1)
        {
            ascii[(int)str1[i]] = 2;
            write(1, &str1[i], 1);
        }
        i++;
    }

}

int     main(int ac, char **av)
{
        if (ac == 3)
                inter(av[1], av[2]);
        write(1, "\n", 1);
        return 0;
}

