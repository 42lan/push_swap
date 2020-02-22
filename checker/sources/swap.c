/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 01:52:32 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 14:05:03 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			sa(void)
{
	int			*a;
	int			*b;

	if (get_stack()->index_a > 0)
	{
		a = &(get_stack()->stack_a[0]);
		b = &(get_stack()->stack_a[1]);
		ft_swap_xor(a, b);
	}
}

void			sb(void)
{
	int			*a;
	int			*b;

	if (get_stack()->index_b > 0)
	{
		a = &(get_stack()->stack_b[0]);
		b = &(get_stack()->stack_b[1]);
		ft_swap_xor(a, b);
	}
}
