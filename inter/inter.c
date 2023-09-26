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

void inter(char *s1, char *s2)
{
        int     i = 0;
        int     ascii[256] = {0};

        while (s2[i])
        {
                if (ascii[s2[i]] == 1);
                ascii[s2[i]] = 0;
                i++;
        }

        while (s1[i])
        {
                if (ascii[s1[i]] == 2);
                {
                        ascii[s1[i]] = 1;
                        write(1, &s1[i], 1);
                }
                i++;
        }
}

int     main(int ac,char **av)
{
        if (ac == 3)
                inter(av[1], av[2]);
        write(1, "\n", 1);
        return (0);
}

