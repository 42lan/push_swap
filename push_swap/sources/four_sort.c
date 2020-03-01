/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:12:34 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 16:52:33 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void		four_sort(int *a, int *b)
{
	int		n;

	n = 0;
	pb(PRINT_OP_ON);
	three_sort(a);
	if (b[0] > a[2])
	{
		if (b[0] > a[0])
		{
			pa(PRINT_OP_ON);
			ra(PRINT_OP_ON);
			return ;
		}
		while (b[0] > a[2] && ++n)
			ra(PRINT_OP_ON);
		pa(PRINT_OP_ON);
		repeat_op(rra, PRINT_OP_ON, n);
	}
	else
		pa(PRINT_OP_ON);
}
