/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:39:08 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/27 22:45:17 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int				get_min_value(int *stack_a, int size)
{
	int			i;
	int			min;

	i = 0;
	min = stack_a[0];
	while (++i < size)
		if (stack_a[i] < min)
			min = stack_a[i];
	return (min);
}

int				get_max_value(int *stack_a, int size)
{
	int			i;
	int			max;

	i = 0;
	max = stack_a[0];
	while (++i < size)
		if (stack_a[i] > max)
			max = stack_a[i];
	return (max);
}

void			insertion_sort(int *stack_a, int size)
{
	(void)stack_a;
	if (size < 2)
		return ;

}

void			sort_stack(void)
{
	int			*s_a;
	int			*s_b;
	unsigned	size;

	s_a = get_stack()->stack_a;
	s_b = get_stack()->stack_b;
	size = get_stack()->top_index_a + 1;
	if (size == 2)
		two_sort(s_a);
	else if (size == 3)
		three_sort(s_a);
	else if (size == 4)
		four_sort(s_a, s_b);
	else if (size == 5)
		insertion_sort(s_a, size - 1);
	//five_sort(s_a, s_b);
}
