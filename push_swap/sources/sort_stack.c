/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:39:08 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 15:57:55 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void			sort_stack(void)
{
	int			*a;
	int			*b;
	unsigned	size;

	a = stack()->a;
	b = stack()->b;
	size = stack()->tia + 1;
	if (size == 2)
		two_sort();
	else if (size == 3)
		three_sort(a);
	else if (size == 4)
		four_sort(a, b);
	else if (size == 5)
		five_sort();
	//	insertion_sort(sta, size - 1);
}
