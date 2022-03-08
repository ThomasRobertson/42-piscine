/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:04:38 by troberts          #+#    #+#             */
/*   Updated: 2022/03/08 00:56:53 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		lensrc;
	int		i;

	lensrc = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	res = malloc(sizeof(char) * (lensrc + 1));
	if (res == NULL)
		return (0);
	i = 0;
	while (i < lensrc)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
