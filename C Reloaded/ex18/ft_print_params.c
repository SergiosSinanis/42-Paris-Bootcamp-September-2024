/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:05:24 by ssinanis          #+#    #+#             */
/*   Updated: 2024/11/05 12:39:22 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	i;
	int	b;

	i = 1;
	while (i < argc)
	{
		b = 0;
		while (argv[i][b] != '\0')
		{
			ft_putchar(argv[i][b]);
			b++;
		}
		ft_putchar('\n');
		i++;
	}
	return (0);
}
