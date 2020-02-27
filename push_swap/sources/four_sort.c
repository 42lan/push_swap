/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:12:34 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/27 10:44:33 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void			four_sort(int *s_a, int *s_b)
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
		while (s_b[0] > s_a[2] && ++i)
			ra();
		pa();
		repeat_op(rra, i);
	}
	else
		pa();
}
