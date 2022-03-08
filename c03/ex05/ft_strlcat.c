/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:19:33 by troberts          #+#    #+#             */
/*   Updated: 2022/03/08 00:56:53 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	srclen;
	unsigned int	dstlen;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dest);
	j = dstlen;
	if (dstlen >= size || size == 0)
		return (size + srclen);
	if (ft_strlen(src) == 0)
		return (dstlen);
	while (src[i] != '\0' && i < size - dstlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dstlen + srclen);
}
