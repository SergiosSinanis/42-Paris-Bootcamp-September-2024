/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 15:35:55 by ssinanis          #+#    #+#             */
/*   Updated: 2024/09/24 12:51:48 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_length;
	unsigned int	src_length;

	i = 0;
	dest_length = 0;
	src_length = 0;
	while (dest[dest_length] != '\0' && dest_length < size)
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (dest_length >= size)
		return (size + src_length);
	while (i < src_length && dest_length + i + 1 < size)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	if (dest_length + i < size)
		dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
