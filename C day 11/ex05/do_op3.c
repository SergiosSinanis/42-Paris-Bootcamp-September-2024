/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:15:45 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/09 15:50:13 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	op;
	int		a;
	int		b;

	if (argc != 4)
		return (0);
	if (argc == 4)
	{
		a = ft_atoi(argv[1]);
		b = ft_atoi(argv[3]);
		op = argv[2][0];
		do_op(a, op, b);
	}
	return (0);
}
