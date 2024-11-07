/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:35:19 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/03 12:38:41 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_is_in_base(char c, char *base);
int	ft_is_base_valid(char *base);

char	*convert_to_base(int number, char *base_to, int base_length)
{
	char	*result;
	int		index;

	result = (char *)malloc(sizeof(char) * 33);
	if (result == NULL)
		return (NULL);
	if (number == 0)
	{
		result[0] = base_to[0];
		result[1] = '\0';
		return (result);
	}
	index = 0;
	while (number > 0)
	{
		result[index] = base_to[number % base_length];
		number = number / base_length;
		index++;
	}
	result[index] = '\0';
	return (result);
}

void	reverse_and_sign(char *result, int sign)
{
	char	aide;
	int		len;
	int		start;
	int		end;

	len = ft_strlen(result);
	start = 0;
	end = len - 1;
	if (sign == -1)
	{
		result[len] = '-';
		result[len + 1] = '\0';
		end = len;
	}
	while (start < end)
	{
		aide = result[start];
		result[start] = result[end];
		result[end] = aide;
		start++;
		end--;
	}
}

char	*convert_number(int number, char *base_to, int base_length, int sign)
{
	char	*result;

	result = convert_to_base(number, base_to, base_length);
	if (result == NULL)
		return (NULL);
	reverse_and_sign(result, sign);
	return (result);
}

int	skip_spaces(char *nbr, char *base_from, int *sign)
{
	int	base_valid;
	int	i;

	base_valid = ft_is_base_valid(base_from);
	if (base_valid == 0)
		return (0);
	i = 0;
	while (nbr[i] == ' ' || (nbr[i] >= 9 && nbr[i] <= 13))
		i++;
	*sign = 1;
	while (nbr[i] == '+' || nbr[i] == '-')
	{
		if (nbr[i] == '-')
		{
			*sign = -(*sign);
		}
		i++;
	}
	while (nbr[i] == '0')
		i++;
	return (i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long	number;
	int			sign;
	int			base_digit;
	int			base_lengths[2];
	int			i;

	base_lengths[0] = ft_is_base_valid(base_from);
	base_lengths[1] = ft_is_base_valid(base_to);
	if (base_lengths[0] < 2 || base_lengths[1] < 2)
		return (NULL);
	i = skip_spaces(nbr, base_from, &sign);
	if (i == 0)
		return (NULL);
	number = 0;
	base_digit = ft_is_in_base(nbr[i], base_from);
	while (nbr[i] != '\0')
	{
		if (base_digit < 0)
			break ;
		number = number * base_lengths[0] + base_digit;
		i++;
	}
	return (convert_number(number, base_to, base_lengths[1], sign));
}
