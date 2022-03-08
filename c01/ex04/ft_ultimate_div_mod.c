/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 17:14:22 by troberts          #+#    #+#             */
/*   Updated: 2022/02/07 14:54:45 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a2;
	int	b2;

	a2 = *a;
	b2 = *b;
	*a = a2 / b2;
	*b = a2 % b2;
}

/* #include <stdio.h>

int main()
{
	int div;
	int mod;

	div = 5;
	mod = 2;
	ft_ultimate_div_mod(&div, &mod);
	printf("%i, %i", div, mod);
} */