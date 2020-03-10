/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fast_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:15:29 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/05 14:21:31 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		fast_rotate_a(t_stack *stack, int value, int position)
{
	int		middle;

	if (stack->a[stack->tia] != value)
	{
		middle = (stack->tia / 2) + (stack->tia % 2);
		if (position >= middle)
			while (stack->a[stack->tia] != value)
				ra(PRINT_OP_ON);
		else
			while (stack->a[stack->tia] != value)
				rra(PRINT_OP_ON);
	}
}

void		fast_rotate_b(t_stack *stack, int value, int position)
{
	int		middle;

	if (stack->b[stack->tib] != value)
	{
		middle = (stack->tib / 2) + (stack->tib % 2);
		if (position >= middle)
			while (stack->b[stack->tib] != value)
				rb(PRINT_OP_ON);
		else
			while (stack->b[stack->tib] != value)
				rrb(PRINT_OP_ON);
	}
}
