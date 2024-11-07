/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:10:27 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/01 10:07:24 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	number;
	int	counter;

	number = 1;
	counter = 0;
	while (nb >= 0)
	{
		if (nb == 0)
			return (counter);
		nb = nb - number;
		number = number + 2;
		counter++;
	}
	return (0);
}
