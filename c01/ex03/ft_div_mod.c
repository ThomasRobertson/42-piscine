/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 12:45:23 by troberts          #+#    #+#             */
/*   Updated: 2022/02/07 14:20:02 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>

int main()
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	ft_div_mod(5, 2, &div, &mod);
	printf("%i, %i", div, mod);
} */