/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:39:08 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/24 19:46:56 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			two_sort(void)
{
	int			*s;

	s = get_stack()->stack_a;
	if (s[1] > s[0])
		sa();
}

void			three_sort(void)
{
	int			*s;

	s = get_stack()->stack_a;
	if (s[2] > s[1] && s[2] < s[0] && s[1] < s[0])
		sa();
	else if (s[2] > s[1] && s[2] > s[0] && s[1] > s[0])
	{
		sa();
		rra();
	}
	else if (s[2] < s[1] && s[2] < s[0] && s[1] > s[0])
	{
		sa();
		ra();
	}
	else if (s[2] > s[1] && s[2] > s[0] && s[1] < s[0])
		ra();
	else if (s[2] < s[1] && s[2] > s[0] && s[1] > s[0])
		rra();
}

void			five_sort(void)
{
	int			*s_a;
	int			*s_b;
	int			top_a;
	int			top_b;

	s_a = get_stack()->stack_a;
	s_b = get_stack()->stack_b;
	pb();
	pb();
	top_a = get_stack()->top_index_a;
	top_b = get_stack()->top_index_b;
	three_sort();
	two_sort();
}

void			sort_stack(void)
{
	unsigned	size;

	size = get_stack()->top_index_a + 1;
	if (size == 2)
		two_sort();
	if (size == 3)
		three_sort();
}
