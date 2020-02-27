/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   five_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:33:21 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/27 12:18:31 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		five_sort(int *s_a, int *s_b)
{
	int		i;

	i = 0;
	print_stacks_state();
	repeat_op(pb, 2);
	three_sort(s_a);
	print_stacks_state();
	if (s_b[1] > s_a[2])
	{
		if (s_b[1] > s_a[0] && s_b[1] > s_a[1] && s_b[1] > s_a[2])
		{
			pa();
			ra();
		}
		while (s_b[1] > s_a[2] && ++i)
			ra();
		print_stacks_state();
		if (s_b[1] > s_a[0] && s_b[1] < s_a[2])
			pa();
		print_stacks_state();
		while (s_b[0] > s_a[3] && ++i)
			ra();
		pa();
		print_stacks_state();
		repeat_op(ra, i - 1);
	}
	print_stacks_state();
	(void)s_a; (void)s_b;
}
/*
{
	int			i;

	i = 0;
	pb();
	three_sort(s_a);
	if (s_b[0] > s_a[2])
	{
		if (s_b[0] > s_a[0])
		{
			pa();
			ra();
			return ;
		}
		while (s_b[0] > s_a[2])
		{
			ra();
			++i;
		}
		pa();
		while (--i >= 0)
			rra();
	}
	else
		pa();
}
*/
