/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:35:42 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/01 10:21:23 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_is_base_valid(char *base)
{
	int	i;
	int	b;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] < ' ' || base[i] == '+' || base[i] == '-')
		{
			return (0);
		}
		b = 0;
		while (base[b] != '\0')
		{
			if (i != b && base[i] == base[b])
				return (0);
			b++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}
