/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:52:32 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 17:45:58 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** swap_top2el() - swaps two first elements of given array pointed by
** `top_index` and `top_index - 1`.
** If `top_index` is less than 1, means that stack has only one element, hence
** there's no need to swap.
*/

static void		swap_top2el(int *stack, int top_index)
{
	int			*a;
	int			*b;

	if (top_index > 0)
	{
		a = &(stack[top_index]);
		b = &(stack[top_index - 1]);
		ft_swap_xor(a, b);
	}
}

void			sa(int print_op)
{
	swap_top2el(stack()->a, stack()->tia);
	(print_op == 1) ? ft_printf("sa\n") : 0;
}

void			sb(int print_op)
{
	swap_top2el(stack()->b, stack()->tib);
	(print_op == 1) ? ft_printf("sb\n") : 0;
}

void			ss(int print_op)
{
	sa(print_op);
	sb(print_op);
	(print_op == 1) ? ft_printf("ss\n") : 0;
}
