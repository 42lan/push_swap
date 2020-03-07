/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:59:39 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/07 23:18:46 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack				*stack(void)
{
	static t_stack	stack;

	return (&stack);
}

void				free_stack(t_stack *stack)
{
	free(stack->a);
	free(stack->b);
	//exit(EXIT_SUCCESS);
}

void				initialize_stack(char **av)
{
	int				top_index;

	top_index = ft_arraysize(av) - 1;
	if (!(stack()->a = ft_ca2ia(av)))
	{
		(ERROR_MANAGEMENT) ? ft_putendl(MALLOC_FAILURE) : 0;
		exit(EXIT_FAILURE);
	}
	if(!(stack()->b = (int *)ft_memalloc(sizeof(int) * top_index)))
	{
		(ERROR_MANAGEMENT) ? ft_putendl(MALLOC_FAILURE) : 0;
		exit(EXIT_FAILURE);
	}
	stack()->tia = top_index;
	stack()->tib = -1;
}
