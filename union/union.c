/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:08:00 by ewang             #+#    #+#             */
/*   Updated: 2023/09/16 17:15:22 by ewang            ###   ########.fr       */
/*                                                                            */
*************************************************************** */

#include <unistd.h>

int     check(char *s, int n, char c)
{
        int i = -1;

        while (++i < n)
                if (s[i] == c)
                        return (0);
        return (1);
}

void    ft_union(char *s1, char *s2)
{
        int     i= -1;
        int     j= -1;

        while (s1[++i])
                if (check(s1, i, s1[i]))
                        write(1, &s1[i], 1);
        while (s2[++j])
                if (check(s1, i, s2[j]) && check(s2, j, s2[j]))
                        write(1, &s2[j], 1);
}

int             main(int ac, char **av)
{
        if (ac == 3)
                ft_union(av[1], av[2]);
        write(1, "\n", 1);
        return (0);
}
