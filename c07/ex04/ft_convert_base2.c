/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 01:22:55 by troberts          #+#    #+#             */
/*   Updated: 2022/02/23 20:52:58 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	check_base_atoi(char *base, int size)
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
		if (base[i] >= 9 && base[i] <= 13)
			return (0);
		if (base[i] == 32)
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

int	ft_atoi(char *str, char *base, unsigned int size)
{
	int				i;
	unsigned int	nb;
	int				j;
	int				signe;

	i = 0;
	nb = 0;
	j = 0;
	signe = 1;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (j % 2 == 1)
		signe = -signe;
	while (ft_in_base(str[i], base) != -1)
	{
		nb = nb * size + ft_in_base(str[i], base);
		i++;
	}
	return (nb * signe);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_nbrlen(long long int nbr, unsigned int size_base)
{
	int				len;
	unsigned int	nb;

	len = 0;
	if (nbr < 0)
	{
		nb = nbr * -1;
		len++;
	}
	else
		nb = nbr;
	while (nb >= size_base)
	{
		nb = nb / size_base;
		len++;
	}
	len++;
	return (len);
}
