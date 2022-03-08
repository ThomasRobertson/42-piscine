/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 22:40:37 by troberts          #+#    #+#             */
/*   Updated: 2022/02/09 13:07:56 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_putint(char c)
{
	c = c + 48;
	write(1, &c, 1);
}

void	ft_printnbr(int *arr, int n)
{
	int		i;

	i = 0;
	if (n == 1)
	{
		while (i < 10)
		{
			ft_putint(i);
			if (i == 9)
				return ;
			ft_putchar(',', ' ');
			i++;
		}
	}
	while (++i < n)
		if (arr[i - 1] >= arr[i])
			return ;
	i = -1;
	while (++i < n)
		ft_putint(arr[i]);
	if (arr[0] < (10 - n))
		ft_putchar(',', ' ');
}

void	ft_print_combn(int n)
{
	int		i;
	int		arr[9];

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	ft_printnbr(arr, n);
	while (arr[0] <= (10 - n) && n > 1)
	{
		arr[n - 1]++;
		i = n - 1;
		while (i > 0 && n > 1)
		{
			if (arr[i] > 9)
			{
				arr[i - 1]++;
				arr[i] = 0;
			}
			i--;
		}
		ft_printnbr(arr, n);
	}
}

/*
int	main(void)
{
	ft_print_combn(2);
}
*/