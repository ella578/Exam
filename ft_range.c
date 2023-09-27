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

int *ft_range(int start, int end)
{
        int      len;
        int      *range;

        len = end >= start ? end - start : start - end;
        if (!(range = (int *)malloc(sizeof(int) * len)))
                return (NULL);

        while (end != start)
        *range++ = end > start ? start++ : start--;
        *range = start;
        return (range - len);
}

