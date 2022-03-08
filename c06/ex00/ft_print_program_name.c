/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:10:26 by troberts          #+#    #+#             */
/*   Updated: 2022/02/18 14:54:57 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char *av[])
{
	int	i;

	i = 0;
	(void)ac;
	while (av[0][i] != '\0')
	{
		ft_putchar(av[0][i]);
		++i;
	}
	ft_putchar('\n');
	return (0);
}
