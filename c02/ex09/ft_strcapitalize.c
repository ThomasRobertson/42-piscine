/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: troberts <troberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:13:29 by troberts          #+#    #+#             */
/*   Updated: 2022/02/18 14:50:36 by troberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanum(char str)
{
	if (str >= '0' && str <= '9')
		return (1);
	else if (str >= 'a' && str <= 'z')
		return (1);
	else if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_str_is_alphanum(str[i]) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			while (ft_str_is_alphanum(str[i]) == 1)
				i++;
		}
		else
			i++;
	}
	return (str);
}
