/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:59:39 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/09 08:23:08 by amalsago         ###   ########.fr       */
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

int					initialize_stack(int ac, char **av)
{
	int				size;

	size = ft_arraysize(av);
	if (!(stack()->a = ft_ca2ia(av)))
	{
		(ERROR_MANAGEMENT) ? ft_putendl(MALLOC_FAILURE) : 0;
		return (FAILURE);
	}
	if (!(stack()->b = (int *)ft_memalloc(sizeof(int) * size)))
	{
		ft_memdel((void **)&stack()->a);
		(ERROR_MANAGEMENT) ? ft_putendl(MALLOC_FAILURE) : 0;
		return (FAILURE);
	}
	stack()->tia = size - 1;
	stack()->tib = -1;
	(ac == 1) ? ft_memdel((void **)av) : 0;
	return (SUCCESS);
}
