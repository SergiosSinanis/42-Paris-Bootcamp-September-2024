/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:37:08 by ssinanis          #+#    #+#             */
/*   Updated: 2024/09/29 10:15:31 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char *argv[])
{
	int	i;
	int	b;

	i = 1;
	while (i < argc)
	{
		b = 0;
		while (argv[i][b] != '\0')
		{
			write (1, &argv[i][b], 1);
			b++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	int		d;
	char	*aide;

	i = 1;
	while (i < argc)
	{
		d = i;
		while (ft_strcmp(argv[d], argv[d - 1]) < 0 && d > 1)
		{
			aide = argv[d - 1];
			argv[d - 1] = argv[d];
			argv[d] = aide;
			d--;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
