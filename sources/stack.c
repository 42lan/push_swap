/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:59:39 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/08 00:08:39 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack				*stack(void)
{
	static t_stack	stack;

	return (&stack);
}

void				free_stack(void)
{
	ft_memdel((void **)&stack()->a);
	ft_memdel((void **)&stack()->b);
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
