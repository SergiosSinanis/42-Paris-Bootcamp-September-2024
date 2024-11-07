/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:40:00 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/06 10:28:51 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
		{
			return (1);
		}
		i++;
	}
	if (c == '\0')
	{
		return (1);
	}
	return (0);
}

int	ft_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (!ft_is_in_charset(str[0], charset))
		words++;
	while (str[i])
	{
		if (ft_is_in_charset(str[i], charset)
			&& str[i + 1] && !ft_is_in_charset(str[i + 1], charset))
		{
			words++;
		}
		i++;
	}
	return (words);
}

void	ft_strduplication(char *dest, char *src, char *charset)
{
	int	i;

	i = 0;
	while (src[i] && !ft_is_in_charset(src[i], charset))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

void	ft_extractor(char **strings, char *str, char *charset)
{
	int	i;
	int	d;
	int	b;

	i = 0;
	d = 0;
	while (str[i])
	{
		if (!ft_is_in_charset(str[i], charset))
		{
			b = 0;
			while (str[i + b] && !ft_is_in_charset(str[i + b], charset))
				b++;
			strings[d] = (char *)malloc(sizeof(char) * (b + 1));
			if (!strings[d])
				return ;
			ft_strduplication(strings[d], &str[i], charset);
			i = i + b;
			d++;
		}
		else
			i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**strings;

	strings = (char **)malloc(sizeof(char *) * (ft_words(str, charset) + 1));
	if (!strings)
		return (NULL);
	strings[ft_words(str, charset)] = 0;
	ft_extractor(strings, str, charset);
	return (strings);
}
