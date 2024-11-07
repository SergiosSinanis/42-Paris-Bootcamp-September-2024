/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:25:58 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/03 10:31:27 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strcpy(char *str)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (dest == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;
	int			i;

	result = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (result == NULL)
		return (NULL);
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strcpy(av[i]);
		if (result[i].copy == NULL)
		{
			while (i > 0)
				free (result[--i].copy);
			free (result);
			return (0);
		}
		i++;
	}
	result[i] = (t_stock_str){0, 0, 0};
	return (result);
}
