/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:40:53 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/05 14:37:08 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_base(unsigned char c)
{
	write (1, "\\", 1);
	if (c / 16 < 10)
	{
		ft_putchar(c / 16 + 48);
	}
	else
	{
		ft_putchar(c / 16 + 87);
	}
	if (c % 16 < 10)
	{
		ft_putchar(c % 16 + 48);
	}
	else
	{
		ft_putchar(c % 16 + 87);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			ft_base(str[i]);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
