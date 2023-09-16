/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:13:33 by ewang             #+#    #+#             */
/*   Updated: 2023/09/12 16:18:21 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i = 0;

	if (ac > 1)
	{
		while(av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] = (av[1][i] - 'a' + 13) % 26 + 'a';
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
					av[1][i] = (av[1][i] - 'A' + 13) % 26 + 'A';
			}
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}