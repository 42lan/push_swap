/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:33:21 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/02 21:43:31 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		median5(t_stack *stack)
{
	int			*tmp;
	int			median;

	if (!(tmp = (int *)ft_memalloc(sizeof(int) * (stack->tia + 1))))
		ft_perror_exit("ft_memalloc() failed in median5()");
	ft_memcpy(tmp, stack->a, sizeof(int) * (stack->tia + 1));
	ft_qsort_int(tmp, 0, stack->tia);
	median = tmp[2];
	free(tmp);
	return (median);
}

void			sort5(t_stack *stack)
{
	int			i;
	int			median;

	i = -1;
	median = median5(stack);
	while (stack->tia > 2)
		(stack->a[stack->tia] > median) ? pb(PRINT_OP_ON) : ra(PRINT_OP_ON);
	sort3(stack->a);
	repeat_op(pa, PRINT_OP_ON, 2);
	repeat_op(ra, PRINT_OP_ON, 2);
}
