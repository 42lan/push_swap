/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:24:36 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/08 17:30:12 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			is_sorted(int print_status)
{
	int		i;
	int		min;

	if (stack()->tib != -1)
	{
		(print_status == 1) ? ft_putendl(SGR_FG_YELLOW"KO"SGR_NORMAL) : 0;
		(ERROR_MANAGEMENT) ? ft_putendl(STACK_UNSORTED) : 0;
		return (FAILURE);
	}
	i = stack()->tia;
	min = stack()->a[i];
	while (--i >= 0)
	{
		if (stack()->a[i] < min)
		{
			(print_status == 1) ? ft_putendl(SGR_FG_YELLOW"KO"SGR_NORMAL) : 0;
			(ERROR_MANAGEMENT) ? ft_putendl(STACK_UNSORTED) : 0;
			return (FAILURE);
		}
		min = stack()->a[i];
	}
	(print_status == 1) ? ft_putendl(SGR_FG_GREEN"OK"SGR_NORMAL) : 0;
	return (SUCCESS);
}
