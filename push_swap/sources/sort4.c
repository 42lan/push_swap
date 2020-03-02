/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:12:34 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 19:23:19 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		sort4(t_stack *stack)
{
	int		n;

	n = 0;
	pb(PRINT_OP_ON);
	sort3(stack->a);
	if (stack->b[0] > stack->a[2])
	{
		if (stack->b[0] > stack->a[0])
		{
			pa(PRINT_OP_ON);
			ra(PRINT_OP_ON);
			return ;
		}
		while (stack->b[0] > stack->a[2] && ++n)
			ra(PRINT_OP_ON);
		pa(PRINT_OP_ON);
		repeat_op(rra, PRINT_OP_ON, n);
	}
	else
		pa(PRINT_OP_ON);
}
