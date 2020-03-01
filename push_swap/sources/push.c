/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:32:30 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 16:58:08 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(int print_op)
{
	if (stack()->tib < 0)
	{
		ft_printf("Stack B is empty\n"); // REMOVE
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
		ft_printf("Stack A is empty\n"); // REMOVE
		return ;
	}
	(stack()->tib)++;
	stack()->b[stack()->tib] = stack()->a[stack()->tia];
	(stack()->tia)--;
	(print_op == 1) ? ft_printf("pb\n") : 0;
}
