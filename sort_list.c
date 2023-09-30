/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:54:02 by ewang             #+#    #+#             */
/*   Updated: 2023/09/30 15:54:02 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
        int      overflow;
        t_list  *tmp;

        tmp = lst;
        while (lst->next != NULL)
        {
                if (((*cmp)(lst->data, lst->next->data)) == 0)
                        {
                        overflow = lst->data;
                        lst-> data = lst->next->data;
                        lst-> next->data = overflow;
                        lst = tmp;
                        }
                else
                lst = lst->next;

        }
                lst = tmp;
                return (lst);
}

