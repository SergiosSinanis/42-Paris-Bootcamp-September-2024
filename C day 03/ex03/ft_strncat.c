/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:29:36 by ssinanis          #+#    #+#             */
/*   Updated: 2024/09/23 14:08:28 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	b;

	i = 0;
	b = 0;
	while (dest[i] != '\0')
		i++;
	while (src[b] != '\0' && b < nb)
	{
		dest[i] = src[b];
		i++;
		b++;
	}
	dest[i] = '\0';
	return (dest);
}
