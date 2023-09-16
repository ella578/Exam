/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:54:55 by ewang             #+#    #+#             */
/*   Updated: 2023/09/16 18:06:22 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     main(int argc, char const *argv[])
{
        int     i;
        int     flag;

        if (argc == 2)
        {
                i = 0;
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                        i++;
                while (argv[1][i])
                {
                        if (argv[1][i] == ' ' || argv[1][i] == '\t')
                                flag = 1;
                        if (!argv[1][i] == ' ' || argv[1][i] == '\t')
                        {
                                if (flag)
                                        write(1, "  ", 3);
                                flag = 0;
                                write(1, &argv[1][i], 1);
                        }
                        i++;
                }
        }
        write(1, "\n", 1);
        return (0);
}
