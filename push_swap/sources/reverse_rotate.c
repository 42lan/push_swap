/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:53:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 15:52:02 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

/*
** rotate_down() - shift down all elements of given stack
*/

static void		rotate_down(int *stack, int top_index)
{
	int		i;
	int		low;

	i = -1;
	low = stack[0];
	while (++i < top_index)
		stack[i] = stack[i + 1];
	stack[top_index] = low;
}

void	rra(int print_op)
{
	rotate_down(stack()->a, stack()->tia);
	(print_op == 1) ? ft_printf("rra\n") : 0;
}

void	rrb(int print_op)
{
	rotate_down(stack()->b, stack()->tib);
	(print_op == 1) ? ft_printf("rrb\n") : 0;
}

void	rrr(int print_op)
{
	rra(print_op);
	rrb(print_op);
	(print_op == 1) ? ft_printf("rrr\n") : 0;
}
