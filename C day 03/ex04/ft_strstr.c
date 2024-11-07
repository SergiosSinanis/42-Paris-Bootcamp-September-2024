/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:33:21 by ssinanis          #+#    #+#             */
/*   Updated: 2024/09/24 12:48:21 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	b;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		b = 0;
		while (str[i + b] && to_find[b] && str[i + b] == to_find[b])
		{
			b++;
		}
		if (to_find[b] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
