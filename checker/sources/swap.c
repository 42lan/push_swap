/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:52:32 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 17:53:48 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** swap_top2el() - swaps two first elements of given array
*/

static void		swap_top2el(int *stack, int len)
{
	int			*a;
	int			*b;

	if (len > 0)
	{
		a = &(stack[0]);
		b = &(stack[1]);
		ft_swap_xor(a, b);
	}
}

void			sa(void)
{
	swap_top2el(get_stack()->stack_a, get_stack()->len_a);
}

void			sb(void)
{
	swap_top2el(get_stack()->stack_b, get_stack()->len_b);
}

void			ss(void)
{
	sa();
	sb();
}
