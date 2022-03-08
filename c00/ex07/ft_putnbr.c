/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 21:57:10 by troberts          #+#    #+#             */
/*   Updated: 2022/02/09 12:57:23 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	nbp;

	if (nb < 0)
	{
		ft_putchar('-');
		nbp = -nb;
	}
	else
		nbp = nb;
	if (nbp > 9)
	{
		ft_putnbr(nbp / 10);
		ft_putnbr(nbp % 10);
	}
	else
		ft_putchar(nbp + '0');
}

/*
int	main(void)
{
	ft_putnbr(11);
} */
