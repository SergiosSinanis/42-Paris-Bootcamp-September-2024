/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:09:18 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/09 16:01:58 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*result;
	int	i;

	i = 0;
	result = (int *)malloc(length * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (i < length)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
