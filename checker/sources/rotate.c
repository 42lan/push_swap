/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 14:24:01 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 18:00:05 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** rotate_up() - shift up all elements of given stack
*/

static void		rotate_up(int *stack, int len)
{
	int		i;
	int		first;

	i = -1;
	first = stack[0];
	while (++i < len)
		stack[i] = stack[i + 1];
	stack[i] = first;
}

void	ra(void)
{
	rotate_up(get_stack()->stack_a, get_stack()->len_a);
}

void	rb(void)
{
	rotate_up(get_stack()->stack_b, get_stack()->len_b);
}

void	rr(void)
{
	ra();
	rb();
}
