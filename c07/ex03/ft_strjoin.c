/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:26:29 by troberts          #+#    #+#             */
/*   Updated: 2022/03/08 00:56:53 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dest);
	if (ft_strlen(src) == 0)
	{
		return (dest);
	}
	while (src[i] != '\0')
	{
		dest[i + len] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}

int	ft_putsep(char *str, char *sep, int k)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		str[k] = sep[i];
		i++;
		k++;
	}
	return (k);
}

int	ft_lenstrs(char **strs, int size)
{
	int	len;
	int	i;

	if (size == 0)
		return (0);
	i = 0;
	len = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len_total;
	char	*str;
	int		i;

	i = 0;
	len_total = ft_lenstrs(strs, size);
	if (size == 0)
		str = malloc(sizeof(char) * size);
	else
		str = malloc(sizeof(char) * (len_total) + ft_strlen(sep) * (size - 1));
	str[i] = '\0';
	if (str == NULL)
		return (0);
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
		i++;
	}
	return (str);
}
