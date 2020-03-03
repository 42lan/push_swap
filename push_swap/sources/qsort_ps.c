/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:57:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/03 20:08:41 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		fast_rotate(t_stack *stack, int imax, int value, int middle)
{
	if (imax >= middle)
		while (stack->b[stack->tib] != value)
			rb(PRINT_OP_ON);
	else
		while (stack->b[stack->tib] != value)
			rrb(PRINT_OP_ON);
}

static void		sort(t_stack *stack)
{
	int			imax;
	int			size_b;
	int			middle;

	size_b = stack->tib + 1;
	while (size_b > 0)
	{
		middle = (size_b / 2) + (size_b % 2);
		imax = get_imax(stack->b, size_b);
		fast_rotate(stack, imax, stack->b[imax], middle);
		pa(PRINT_OP_ON);
		size_b = stack->tib + 1;
	}
}

static int		qs_median(int *a, int size)
{
	int			*tmp;
	int			median;

	if (!(tmp = (int *)ft_memalloc(sizeof(int) * size)))
		ft_perror_exit("ft_memalloc() failed in median()");
	ft_memcpy(tmp, a, sizeof(int) * size);
	ft_qsort_int(tmp, 0, size - 1);
	median = tmp[((size >> 1) + (size >> 2))];
	free(tmp);
	return (median);
}

static void		partition(t_stack *stack)
{
	int			size;
	int			median;

	if (check_sort() == 1 || stack->tia <= 0)
		return ;
	size = stack->tia + 1;
	median = qs_median(stack->a, size) - 1;
	while (--size > 0)
	{
		if (stack->a[stack->tia] <= median)
		{
			pb(PRINT_OP_ON);
			size = stack->tia + 1;
		}
		else
			ra(PRINT_OP_ON);
	}
	partition(stack);
}

void			qsort_ps(t_stack *stack)
{
	partition(stack);
	sort(stack);
}
