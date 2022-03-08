/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:28:09 by troberts          #+#    #+#             */
/*   Updated: 2022/02/07 14:20:19 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swp;
	int	len;

	i = 0;
	len = size - 1;
	while (i < size / 2)
	{
		swp = tab[i];
		tab[i] = tab[len];
		tab[len] = swp;
		i++;
		len--;
	}
}

/*
#include <stdio.h>

void ft_printarray (int arr[], int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%i",arr[i]);
		i++;
	}
}
int main()
{
	int j = 0;
	int i[] = {0, 1, 2, 3};
	ft_rev_int_tab(i, 4);
	ft_printarray(i, 4)
} */