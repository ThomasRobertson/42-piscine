/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:18:09 by troberts          #+#    #+#             */
/*   Updated: 2022/02/07 15:01:19 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>

int main()
{
	int tab[] = {1,5,4,2,3};
	int size = 5;
	ft_sort_int_tab(tab, size);
	
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
} */