/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:14:51 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/09 16:02:46 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			counter++;
		i++;
	}
	return (counter);
}
