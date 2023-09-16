/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:33:03 by ewang             #+#    #+#             */
/*   Updated: 2023/09/15 16:38:48 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc >1)
		while (argv[1][++i])
			write(1, &argv[1][i], 1);
	write(1, "\n", 1);
	return (0);
}