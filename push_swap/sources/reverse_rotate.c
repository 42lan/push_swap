/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:53:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/24 19:01:38 by amalsago         ###   ########.fr       */
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

void	rra(void)
{
	rotate_down(get_stack()->stack_a, get_stack()->top_index_a);
	ft_printf("rra\n");
}

void	rrb(void)
{
	rotate_down(get_stack()->stack_b, get_stack()->top_index_b);
	ft_printf("rrb\n");
}

void	rrr(void)
{
	rra();
	rrb();
	ft_printf("rrr\n");
}