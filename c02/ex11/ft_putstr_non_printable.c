/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 22:16:06 by troberts          #+#    #+#             */
/*   Updated: 2022/02/17 17:49:01 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_cnvrt_hexa(char c)
{
	char			*hexa;
	unsigned char	c2;

	c2 = (unsigned)c;
	hexa = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hexa[c2 / 16]);
	ft_putchar(hexa[c2 % 16]);
}

int	ft_char_is_printable(char str)
{
	if (str >= 32 && str < 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_char_is_printable(str[i]))
		{
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			ft_cnvrt_hexa(str[i]);
			i++;
		}
	}
}
