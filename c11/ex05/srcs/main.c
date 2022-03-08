/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:56:05 by troberts          #+#    #+#             */
/*   Updated: 2022/03/08 00:54:38 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atoi.h"
#include "ft_putnbr.h"
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	check_operator(char *str)
{
	int		len;
	char	c;

	len = 0;
	while (str[len] != 0)
		len++;
	if (len != 1)
		return (0);
	c = str[0];
	if (c == '+' || c == '-' || c == '/' || c == '%')
		return (1);
	else
		return (0);
}

void	ft_doop(char *nb1, char op, char *nb2)
{
	int	nbr1;
	int	nbr2;

	nbr1 = ft_atoi(nb1);
	nbr2 = ft_atoi(nb2);
	if (op == '+')
		ft_putnbr(nbr1 + nbr2);
	if (op == '-')
		ft_putnbr(nbr1 - nbr2);
	if (op == '/')
	{
		if (nbr2 == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr(nbr1 / nbr2);
	}
	if (op == '%')
	{
		if (nbr2 == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr(nbr1 % nbr2);
	}
}

int	main(int ac, char **av)
{
	char	op;

	if (ac != 4)
	{
		return (0);
	}
	if (check_operator(av[2]) == 0)
	{
		ft_putstr("0\n");
		return (0);
	}
	op = *av[2];
	ft_doop(av[1], op, av[3]);
	write(1, "\n", 1);
}
