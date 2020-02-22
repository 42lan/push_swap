/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:53:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 15:37:40 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "checker.h"

static void		rotate_down(int *stack, int len)
{
	int		i;
	int		last;

	i = len + 1;
	last = stack[len];
	while (--i >= 0)
		stack[i] = stack[i - 1];
	stack[0] = last;
}

void	rra(void)
{
	rotate_down(get_stack()->stack_a, get_stack()->len_a);
}

void	rrb(void)
{
	rotate_down(get_stack()->stack_b, get_stack()->len_b);
}

void	rrr(void)
{
	rra();
	rrb();
}
