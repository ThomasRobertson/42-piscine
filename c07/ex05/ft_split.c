/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:18:38 by troberts          #+#    #+#             */
/*   Updated: 2022/02/23 20:07:07 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_charset(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != str && charset[i] != 0)
		i++;
	if (charset[i] == '\0')
		return (0);
	else
		return (1);
}

int	ft_count_words(char *str, char *charset)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (str[i] != 0)
	{
		while (ft_is_in_charset(str[i], charset) == 1 && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			counter++;
		while (ft_is_in_charset(str[i], charset) == 0 && str[i] != '\0')
			i++;
	}
	return (counter);
}

char	*ft_put_word(char *str, char *charset)
{
	int		i;
	int		len;
	char	*word;

	i = 0;
	len = 0;
	while (ft_is_in_charset(str[len], charset) == 0 && str[len] != '\0')
		len++;
	word = malloc(sizeof(char) * (len + 1));
	word[len] = '\0';
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		nbword;
	int		i;
	int		j;

	i = 0;
	j = 0;
	nbword = ft_count_words(str, charset);
	array = malloc(sizeof(char *) * (nbword + 1));
	while (str[i] != 0)
	{
		while (ft_is_in_charset(str[i], charset) == 1 && str[i] != 0)
			i++;
		if (str[i] != '\0')
		{
			array[j] = ft_put_word(str + i, charset);
			j++;
		}
		while (ft_is_in_charset(str[i], charset) == 0 && str[i] != 0)
			i++;
	}
	array[nbword] = 0;
	return (array);
}
