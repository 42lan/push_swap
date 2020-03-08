/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   qsort_ps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 19:57:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/07 16:13:14 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		adapted_div(int size)
{
	if (size == 1000)
		return (10);
	else if (size == 900)
		return (9);
	else if (size == 500)
		return (7);
	else if (size == 100)
		return (4);
	else
		return (2);
}

static int		median_qs(int *a, int size)
{
	int			*tmp;
	int			median;

	if (!(tmp = (int *)ft_memalloc(sizeof(int) * size)))
	{
		free_stack();
		(ERROR_MANAGEMENT) ? ft_putendl(MALLOC_FAILURE) : 0;
		exit(EXIT_FAILURE);
	ft_memcpy(tmp, a, sizeof(int) * size);
	ft_qsort_int(tmp, 0, size - 1);
	//median = tmp[(int)(((size / adapted_div(size)) + (size % adapted_div(size))) * 0.9)];
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
	int			i;
	int			median;

	/*
	if (stack->tia <= 4)
	{
		small_sort(stack);
		return ;
	}
	else */
	if (is_sorted(PRINT_STATUS_OFF) == 1 || stack->tia <= 0)
		return ;
	i = stack->tia + 1;
	median = median_qs(stack->a, i);
	while (--i >= 0)
		if (stack->a[i] <= median)
		{
			fast_rotate_a(stack, stack->a[i], i);
			pb(PRINT_OP_ON);
			i = stack->tia + 1;
		}
	partition(stack);
}

void			qsort_ps(t_stack *stack)
{
	partition(stack);
	sort(stack);
}
