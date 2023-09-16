/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ewang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:13:30 by ewang             #+#    #+#             */
/*   Updated: 2023/09/16 14:56:12 by ewang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}
int main()
{
	int i
	
	i = 1;
	while(i <= 100)
	{
		if(i % 15 == 0)
			write(1, "fizzbuzz\n ", 9);
		else if(i % 3 == 0)
			write(1, "fizz\n ", 5);
		else if(i % 5 == 0)
			write(1, "buzz\n ", 5);
		else
			ft_putnbr(i);
			write(1, "\n ", 1);
		i++;
	}
}
