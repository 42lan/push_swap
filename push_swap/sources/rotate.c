/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:24:01 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/24 18:24:07 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** rotate_up() - shift up all elements of given stack
*/

static void		rotate_up(int *stack, int top_index)
{
	int		top;

	top = stack[top_index];
	while (--top_index >= 0)
		stack[top_index + 1] = stack[top_index];
	stack[0] = top;
}

void	ra(void)
{
	rotate_up(get_stack()->stack_a, get_stack()->top_index_a);
}

void	rb(void)
{
	rotate_up(get_stack()->stack_b, get_stack()->top_index_b);
}

void	rr(void)
{
	ra();
	rb();
}
