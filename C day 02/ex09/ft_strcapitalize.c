/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 19:57:09 by ssinanis          #+#    #+#             */
/*   Updated: 2024/09/22 13:39:34 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	if (((c >= 'A' && c <= 'Z')
			|| (c >= 'a' && c <= 'z')))
		return (1);
	return (0);
}

int	ft_is_numer(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_alphanumer(char c)
{
	return (ft_is_alpha(c) || ft_is_numer(c));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else if (!(ft_is_alphanumer(str[i - 1]))
			&& str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if ((ft_is_alphanumer(str[i - 1]))
			&& str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
