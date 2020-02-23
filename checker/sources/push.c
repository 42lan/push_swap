/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:32:30 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/23 14:15:14 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	pa(void)
{
	if (get_stack()->top_index_b < 0)
	{
		ft_printf("Stack B is empty\n");
		return ;
	}
	(get_stack()->top_index_a)++;
	get_stack()->stack_a[get_stack()->top_index_a] = get_stack()->stack_b[get_stack()->top_index_b];
	(get_stack()->top_index_b)--;
}

void	pb(void)
{
	if (get_stack()->top_index_a < 0)
	{
		ft_printf("Stack A is empty\n");
		return ;
	}
	(get_stack()->top_index_b)++;
	get_stack()->stack_b[get_stack()->top_index_b] = get_stack()->stack_a[get_stack()->top_index_a];
	(get_stack()->top_index_a)--;
}
