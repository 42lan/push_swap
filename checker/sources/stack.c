/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:59:39 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/23 15:41:05 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack				*get_stack(void)
{
	static t_stack	stack;

	return (&stack);
}

void				initialize_stack(char **av)
{
	int		top_index;

	top_index = ft_arraysize(av) - 1;
	get_stack()->stack_a = ft_ca2ia(av);
	get_stack()->top_index_a = top_index;
	get_stack()->stack_b = (int *)ft_memalloc(sizeof(int) * top_index);
	get_stack()->top_index_b = -1;
}
