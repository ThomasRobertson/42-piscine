/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:22:59 by troberts          #+#    #+#             */
/*   Updated: 2022/02/23 20:58:49 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_in_base(char c, char *base);

int				check_base_atoi(char *base, int size);

int				ft_atoi(char *str, char *base, unsigned int size);

int				ft_strlen(char *str);

unsigned int	ft_nbrlen(long long int nbr, unsigned int size_base);

char	*ft_putnbr(int nb, char *base, unsigned int size_base, int len)
{
	unsigned int	nbr;
	char			*nbres;
	int				i;

	i = 0;
	nbres = malloc(sizeof(char *) * len + 1);
	if (nb < 0)
	{
		nbr = -nb;
		nbres[i] = '-';
		i++;
	}
	else
		nbr = nb;
	len--;
	while (nbr >= size_base)
	{
		nbres[len] = base[nbr % size_base];
		nbr = nbr / size_base;
		len --;
	}
	if (nbr < size_base)
		nbres[i] = base[nbr];
	return (nbres);
}

int	check_base_nbr(char *base, int size)
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	unsigned int	s_b_f;
	unsigned int	s_b_t;
	long long int	nbres;
	char			*nb;
	unsigned int	len;

	if (nbr == 0 || base_from == 0 || base_to == 0)
		return (0);
	s_b_f = ft_strlen(base_from);
	s_b_t = ft_strlen(base_to);
	if (!check_base_atoi(base_from, s_b_f) || !check_base_nbr(base_to, s_b_t))
		return (0);
	nbres = (ft_atoi(nbr, base_from, s_b_f));
	len = ft_nbrlen(nbres, s_b_t);
	nb = ft_putnbr(nbres, base_to, s_b_t, len);
	nb[len] = 0;
	return (nb);
}
