/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:04:31 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/09 12:28:19 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	result = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write (1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = nb * (-1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		write (1, &c, 1);
	}
}

void	division_error(int a, int b)
{
	if (b == 0)
	{
		write (1, "Stop : division by zero", 23);
		return ;
	}
	else
		ft_putnbr(div(a, b));
}

void	modulo_error(int a, int b)
{
	if (b == 0)
	{
		write (1, "Stop : modulo by zero", 21);
		return ;
	}
	else
		ft_putnbr(mod(a, b));
}

void	do_op(int a, char op, int b)
{
	if (op == '+')
		ft_putnbr(add(a, b));
	else if (op == '-')
		ft_putnbr(subs(a, b));
	else if (op == '*')
		ft_putnbr(mul(a, b));
	else if (op == '/')
		division_error(a, b);
	else if (op == '%')
		modulo_error(a, b);
	else
		write (1, "0", 1);
	write (1, "\n", 1);
}
