/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 12:27:46 by troberts          #+#    #+#             */
/*   Updated: 2022/03/08 00:56:53 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb, char *base, unsigned int size)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		nbr = -nb;
		write(1, "-", 1);
	}
	else
		nbr = nb;
	if (nbr >= size)
	{
		ft_putnbr(nbr / size, base, size);
		ft_putnbr(nbr % size, base, size);
	}
	else
		ft_putchar(base[nbr]);
}

int	check_base(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 1)
		return (0);
	while (i < size)
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = 0;
		while (j < size)
		{
			if (base[j] == base[i] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size;

	size = 0;
	while (base[size] != '\0')
	{
		size++;
	}
	if (!check_base(base, size))
		return ;
	ft_putnbr(nbr, base, size);
}
