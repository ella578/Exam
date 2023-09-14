/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:45:06 by ewang             #+#    #+#             */
/*   Updated: 2023/09/07 14:48:04 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int	argc, char	**argv)
{
	int i = 0;
	
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return(0);
			}
			i++;
		}
		write(1, "\n",1);
		return (0);
	}
	write(1, "a\n",2);
	return (0);
}
