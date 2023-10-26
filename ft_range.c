/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:47:34 by ewang             #+#    #+#             */
/*   Updated: 2023/09/16 17:51:31 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
        int     size;
        int     *res;
        int     i;

        size = end >= start ? end - start : start - end;
        res = malloc((size + 1) * sizeof(int));
        if (!res)
                return (NULL);

        i = 0;
        if (end > start)
        {
                while (end >= start)
                {
                        res[i] = start++;
                        i ++;
                }
        }
        else
        {
                while (end <= start)
                {
                        res[i] = start--;
                        i ++;
                }
        }
        return (res);
}

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    (void)ac;

    int start = atoi(av[1]);
    int end = atoi(av[2]);
    int *arr = ft_range(start, end);

    for (int i = 0; i <= abs(end - start); i++)
        printf("%d\n", arr[i]);

    free(arr);
    return (EXIT_SUCCESS);
}
          
