/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:34:29 by ewang             #+#    #+#             */
/*   Updated: 2022/11/30 17:21:52 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

static int	count(int nbr)
{
	int	i;

	if (nbr == 0)
		i = 1;
	else
		i = 0;
	while (nbr)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char			*dst;
	size_t			len;
	unsigned int	nb;

	len = count(nbr);
	if (nbr < 0)
	{
		len = len + 1;
		nb = -nbr;
	}
	else
		nb = nbr;
	dst = (char *)malloc(sizeof(char) * len + 1);
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	while (len--)
	{
		dst[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	if (nbr < 0)
		dst[0] = '-';
	return (dst);
}
