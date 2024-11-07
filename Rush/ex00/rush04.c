/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 11:41:55 by ssinanis          #+#    #+#             */
/*   Updated: 2024/09/22 11:56:57 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_conditions(int x, int y, int i, int b)
{
	if ((i == 0 && b == 0) || (i == x - 1 && b == y - 1))
		ft_putchar('A');
	else if ((i == x - 1 && b == 0) || (i == 0 && b == y - 1))
		ft_putchar('C');
	else if (b == 0 || b == y - 1)
		ft_putchar('B');
	else if (i == 0 || i == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	ft_conditions2(int x, int y, int i, int b)
{
	if (i == 0 && b == 0)
		ft_putchar('A');
	else if ((i == x - 1 && b == 0) || (i == 0 && b == y - 1))
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	rush(int x, int y)
{
	int	i;
	int	b;

	b = 0;
	if (x <= 0 || y <= 0)
	{
		write (1, "Invalid dimensions\n", 19);
		return ;
	}
	while (b < y)
	{
		i = 0;
		while (i < x && x != 1 && y != 1)
		{
			ft_conditions(x, y, i, b);
			i++;
		}
		while (i < x && (x == 1 || y == 1))
		{
			ft_conditions2(x, y, i, b);
			i++;
		}
		ft_putchar('\n');
		b++;
	}
}
