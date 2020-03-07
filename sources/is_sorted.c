/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:24:36 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/07 23:19:40 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			is_sorted(int print_status)
{
	int		i;
	int		min;

	if (stack()->tib != -1)
	{
		(print_status == 1) ? ft_putendl("KO") : 0;
		(ERROR_MANAGEMENT) ? ft_putendl(STACK_UNSORTED) : 0;
		return (0);
	}
	i = stack()->tia;
	min = stack()->a[i];
	while (--i >= 0)
	{
		if (stack()->a[i] < min)
		{
			(print_status == 1) ? ft_putendl("KO") : 0;
			(ERROR_MANAGEMENT) ? ft_putendl(STACK_UNSORTED) : 0;
			return (0);
		}
		min = stack()->a[i];
	}
	(print_status == 1) ? ft_putendl("OK") : 0;
	return (1);
}
