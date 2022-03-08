/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:50:03 by troberts          #+#    #+#             */
/*   Updated: 2022/02/09 13:00:34 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puttriplechar(char c, char d, char e)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
}

void	ft_print_comb(void)
{
	char	nb1;
	char	nb2;
	char	nb3;

	nb1 = '0';
	while (nb1 <= '7')
	{
		nb2 = nb1 + 1;
		while (nb2 <= '8')
		{
			nb3 = nb2 + 1;
			while (nb3 <= '9')
			{
				ft_puttriplechar(nb1, nb2, nb3);
				if (nb1 != '7' || nb2 != '8' || nb3 != '9')
				{
					write(1, ", ", 2);
				}
				nb3++;
			}
			nb2++;
		}
		nb1++;
	}
}

/*
int		main(void)
{
	ft_print_comb();
} */