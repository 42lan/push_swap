/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/05 14:29:09 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/08 00:11:32 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(int *a)
{
	if (a[1] > a[0])
		sa(PRINT_OP_ON);
}

void	sort3(int *a)
{
	if (a[2] > a[1] && a[2] < a[0] && a[1] < a[0])
		sa(PRINT_OP_ON);
	else if (a[2] > a[1] && a[2] > a[0] && a[1] > a[0])
	{
		sa(PRINT_OP_ON);
		rra(PRINT_OP_ON);
	}
	else if (a[2] < a[1] && a[2] < a[0] && a[1] > a[0])
	{
		sa(PRINT_OP_ON);
		ra(PRINT_OP_ON);
	}
	else if (a[2] > a[1] && a[2] > a[0] && a[1] < a[0])
		ra(PRINT_OP_ON);
	else if (a[2] < a[1] && a[2] > a[0] && a[1] > a[0])
		rra(PRINT_OP_ON);
}

void		sort4(t_stack *stack)
{
	int		n;

	n = 0;
	pb(PRINT_OP_ON);
	sort3(stack->a);
	if (stack->b[0] > stack->a[2])
	{
		if (stack->b[0] > stack->a[0])
		{
			pa(PRINT_OP_ON);
			ra(PRINT_OP_ON);
			return ;
		}
		while (stack->b[0] > stack->a[2] && ++n)
			ra(PRINT_OP_ON);
		pa(PRINT_OP_ON);
		repeat_op(rra, PRINT_OP_ON, n);
	}
	else
		pa(PRINT_OP_ON);
}

void		sort5(t_stack *stack)
{
	int		*tmp;
	int		median;

	if (!(tmp = (int *)ft_memalloc(sizeof(int) * (stack->tia + 1))))
	{
		free_stack();
		(ERROR_MANAGEMENT) ? ft_putendl(MALLOC_FAILURE) : 0;
		exit(EXIT_FAILURE);
	}
	ft_memcpy(tmp, stack->a, sizeof(int) * (stack->tia + 1));
	ft_qsort_int(tmp, 0, stack->tia);
	median = tmp[2];
	ft_memdel((void **)&tmp);
	while (stack->tia > 2)
		(stack->a[stack->tia] < median) ? pb(PRINT_OP_ON) : ra(PRINT_OP_ON);
	sort3(stack->a);
	repeat_op(pa, PRINT_OP_ON, 2);
	(stack->a[stack->tia] > stack->a[stack->tia - 1]) ? sa(PRINT_OP_ON) : 0;
}

void		small_sort(t_stack *stack)
{
	int		size_a;

	size_a = stack->tia + 1;
	if (size_a == 2)
		sort2(stack->a);
	else if (size_a == 3)
		sort3(stack->a);
	else if (size_a == 4)
		sort4(stack);
	else if (size_a == 5)
		sort5(stack);
}
