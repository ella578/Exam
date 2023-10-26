/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:52:17 by ewang             #+#    #+#             */
/*   Updated: 2023/09/16 17:52:56 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
        int     size;
        int     *res;


        size = end >= start ? end - start : start - end;
        res = malloc((size + 1) * sizeof(int));
        if (!res)
                return (NULL);

        if (start < end)
        {
                while (start <= end)
                 res[size--] = start++;
        }
                else
                {
                  while (start >= end)
                  res[size--] = start--;
          }
        return (res);
}

#include <stdio.h>
int main(int ac, char **av)
{
        (void)ac;
        int     arr_len;
        int     *arr;
        arr_len = abs(atoi(av[2]) - atoi(av[1]));
        arr = ft_rrange(atoi(av[1]), atoi(av[2]));
        for (int i = 0; i <= arr_len; i += 1)
                printf("%d\n", arr[i]);
        free(arr);
        return (0);
}




