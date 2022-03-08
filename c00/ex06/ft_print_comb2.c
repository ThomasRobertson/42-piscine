/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 19:22:09 by troberts          #+#    #+#             */
/*   Updated: 2022/02/09 12:59:08 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int c)
{
	char	c1;
	char	c2;

	c1 = (char)c / 10 + 48;
	c2 = (char)c % 10 + 48;
	ft_putchar(c1);
	ft_putchar(c2);
}

void	ft_print_comb2(void)
{
	int	nb1;
	int	nb2;

	nb1 = 0;
	while (nb1 <= 98)
	{
		nb2 = nb1 + 1;
		while (nb2 <= 99)
		{
			ft_print(nb1);
			ft_putchar(' ');
			ft_print(nb2);
			if (nb1 != 98 || nb2 != 99)
			{
				write(1, ", ", 2);
			}
			nb2++;
		}
		nb1++;
	}
}

/*
int		main(void)
{
	ft_print_comb2();
}
*/