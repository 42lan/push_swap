/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:24:01 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/09 08:21:17 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** rotate_up() - shift up all elements of given stack
*/

static void		rotate_up(int *stack, int top_index)
{
	int			top;

	top = stack[top_index];
	while (--top_index >= 0)
		stack[top_index + 1] = stack[top_index];
	stack[0] = top;
}

void			ra(int print_op)
{
	rotate_up(stack()->a, stack()->tia);
	(print_op == 1) ? ft_putendl("ra") : 0;
}

void			rb(int print_op)
{
	rotate_up(stack()->b, stack()->tib);
	(print_op == 1) ? ft_putendl("rb") : 0;
}

void			rr(int print_op)
{
	ra(print_op);
	rb(print_op);
	(print_op == 1) ? ft_putendl("rr") : 0;
}
