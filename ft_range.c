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

int     *ft_range(int min, int max)
{
        int     n;
        int     *s;

        n = max >= min ? max - min : min - max;
        if (!(s= (int *)malloc(sizeof(int) * (n))))
                return (NULL);
        while (max != min)
                *s++ = max > min ? min++ : min--;
        *s = min;
        return (s - n);
}
