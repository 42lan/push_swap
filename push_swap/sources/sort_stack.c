/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:39:08 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/24 18:09:02 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			three_sort(void)
{
	int			*stack;

	stack = get_stack()->stack_a;
	if (stack[2] > stack[1] && stack[2] < stack[0] && stack[1] < stack[0])
		sa();
	else if (stack[2] > stack[1] && stack[2] > stack[0] && stack[1] > stack[0])
	{
		sa();
		rra();
	}
	else if (stack[2] < stack[1] && stack[2] < stack[0] && stack[1] > stack[0])
	{
		sa();
		ra();
	}
	else if (stack[2] > stack[1] && stack[2] > stack[0] && stack[1] < stack[0])
		ra();
	else if (stack[2] < stack[1] && stack[2] > stack[0] && stack[1] > stack[0])
		rra();
}

void			sort_stack(void)
{
	unsigned	size;

	size = get_stack()->top_index_a + 1;
	if (size == 3)
		three_sort();
}
