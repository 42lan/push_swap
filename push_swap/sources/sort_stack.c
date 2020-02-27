/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:39:08 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/27 10:48:02 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


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
		five_sort(s_a, s_b);
}
