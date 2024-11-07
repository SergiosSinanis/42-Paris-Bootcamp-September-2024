/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:02:21 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/04 14:01:04 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	number;

	number = 2;
	if (nb <= 1)
		return (0);
	while (number <= nb / number)
	{
		if (nb % number == 0)
			return (0);
		number++;
	}
	return (1);
}
