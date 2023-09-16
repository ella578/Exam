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

int *ft_rrange(int start, int end)
{
        int *rrange;
        int i = 0;

        if (start > end)
                rrange = (int *)malloc(sizeof(int) * (start - end) + 1);
        else
                rrange = (int *)malloc(sizeof(int) * (end - start) + 1);
        while (start != end)
        {
                rrange[i++] = end;
                end -= (start > end) ? -1 : 1;
        }
        rrange[i] = end;
        return (rrange);
}
