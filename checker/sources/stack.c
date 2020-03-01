/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:59:39 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 17:45:52 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

t_stack				*stack(void)
{
	static t_stack	stack;

	return (&stack);
}

void				initialize_stack(char **av)
{
	int				top_index;

	top_index = ft_arraysize(av) - 1;
	stack()->a = ft_ca2ia(av);
	stack()->b = (int *)ft_memalloc(sizeof(int) * top_index);
	stack()->tia = top_index;
	stack()->tib = -1;
}
