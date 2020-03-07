/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:32:30 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/07 23:09:29 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int print_op)
{
	if (stack()->tib < 0)
	{
		(ERROR_MANAGEMENT) ? ft_putendl(STACK_B_EMPTY) : 0;
		return ;
	}
	(stack()->tia)++;
	stack()->a[stack()->tia] = stack()->b[stack()->tib];
	(stack()->tib)--;
	(print_op == 1) ? ft_printf("pa\n") : 0;
}

void	pb(int print_op)
{
	if (stack()->tia < 0)
	{
		(ERROR_MANAGEMENT) ? ft_putendl(STACK_A_EMPTY) : 0;
		return ;
	}
	(stack()->tib)++;
	stack()->b[stack()->tib] = stack()->a[stack()->tia];
	(stack()->tia)--;
	(print_op == 1) ? ft_printf("pb\n") : 0;
}
