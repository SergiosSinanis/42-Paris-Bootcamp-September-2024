/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssinanis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 10:17:07 by ssinanis          #+#    #+#             */
/*   Updated: 2024/10/09 10:52:13 by ssinanis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putnbr(int nb);
void	division_error(int a, int b);
void	modulo_error(int a, int b);
void	do_op(int a, char op, int b);
int		add(int a, int b);
int		subs(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		ft_atoi(char *str);

#endif
