/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:16:53 by troberts          #+#    #+#             */
/*   Updated: 2022/03/08 00:56:53 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	countinf;
	int	countsup;

	i = 0;
	countinf = 1;
	countsup = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[1 + i]) <= 0)
			countsup++;
		if (f(tab[i], tab[1 + i]) >= 0)
			countinf++;
		i++;
	}
	if (length == countsup || length == countinf)
		return (0);
	return (1);
}
