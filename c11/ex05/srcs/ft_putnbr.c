/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 00:10:35 by troberts          #+#    #+#             */
/*   Updated: 2022/02/24 00:15:53 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putnbr.h"

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
