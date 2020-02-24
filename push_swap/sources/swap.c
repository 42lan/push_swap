/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:52:32 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/24 18:24:01 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void			sa(void)
{
	swap_top2el(get_stack()->stack_a, get_stack()->top_index_a);
}

void			sb(void)
{
	swap_top2el(get_stack()->stack_b, get_stack()->top_index_b);
}

void			ss(void)
{
	sa();
	sb();
}
