/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:40:53 by ssinanis          #+#    #+#             */
/*   Updated: 2024/09/26 12:01:23 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_base_test(char *base)
{
	int	i;
	int	b;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
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
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	check;
	int	number;

	check = ft_base_test(base);
	if (check == 0)
		return ;
	if (number < 0)
	{
		ft_putchar('-');
		number = number * (-1);
	}
	while (number >= ft_strlen(base))
		ft_putnbr_base(number / ft_strlen(base), base);
	ft_putchar(number % ft_strlen(base));
}
