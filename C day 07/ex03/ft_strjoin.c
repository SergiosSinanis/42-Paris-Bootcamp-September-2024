/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:11:59 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/05 09:47:20 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (src[b] != '\0')
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strslen(int size, char **strs)
{
	int	i;
	int	length;

	i = 0;
	length = 0;
	while (i < size)
	{
		length = length + ft_strlen(strs[i]);
		i++;
	}
	return (length);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		i;
	int		total_length;

	i = 0;
	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char) * 1);
		if (!(result))
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total_length = ft_strlen(sep) * (size - 1) + (ft_strslen(size, strs)) + 1;
	result = (char *)malloc(sizeof(char) * total_length);
	if (!(result))
		return (NULL);
	result[0] = '\0';
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i++ < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
