/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:58:16 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/23 17:45:41 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_stack(char stack_name, int *stack, int top_index)
{
	int	i;

	i = -1;
	ft_printf("Stack %c: ", stack_name);
	while (++i <= top_index)
		ft_printf("[%d]", stack[i]);
	ft_printf("\n");
}

void print_stack(int *stack, int top_index)
{
	int j = -1;
	while (++j <= top_index)
		ft_printf("[%d]", stack[j]);
	ft_printf("\n");
}
