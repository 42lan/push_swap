/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:58:16 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 15:59:16 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(char stack_name, int *stack, int top_index)
{
	int	i;

	i = -1;
	ft_printf("Stack %c: ", stack_name);
	while (++i <= top_index)
		ft_printf("[%d]", stack[i]);
	ft_printf("\n");
}

void	print_stacks_state(void)
{
	print_stack('A', stack()->a, stack()->tia);
	print_stack('B', stack()->b, stack()->tib);
}

void	print_sorted(int moves)
{
	if (moves == 0)
		ft_printf("Stack A was initialy sorted.");
	else
	{
		ft_printf("Stack A is sorted in ");
		ft_printf("%d %s\n", moves,	moves == 1 ? "move" : "moves");
	}
}
