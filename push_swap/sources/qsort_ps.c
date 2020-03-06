/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort_ps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:57:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/05 22:48:56 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		adapted_div(int size)
{
	if (size == 9 || size == 10)
		return (3);
	if (size == 100)
		return (5);
	else if (size == 500)
		return (8);
	else
		return (2);
}

static int		median_qs(int *a, int size)
{
	int			*tmp;
	int			median;

	if (!(tmp = (int *)ft_memalloc(sizeof(int) * size)))
		exit(EXIT_FAILURE);
	ft_memcpy(tmp, a, sizeof(int) * size);
	ft_qsort_int(tmp, 0, size - 1);
	median = tmp[size / adapted_div(size)];
	free(tmp);
	return (median);
}

static void		sort(t_stack *stack)
{
	int			imax;

	while (stack->tib >= 0)
	{
		imax = get_imax(stack->b, stack->tib + 1);
		fast_rotate_b(stack, stack->b[imax], imax);
		pa(PRINT_OP_ON);
	}
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
