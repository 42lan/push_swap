/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:58:16 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/23 16:27:04 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_av(char **av)
{
	int i = -1;
	while (av[++i])
	{
		if (av[i])
			ft_printf("[%s]", av[i]);
		else
			ft_printf("[ ]");
	}
	ft_printf("\n");
}

void print_stack(int *stack, int top_index)
{
	int j = -1;
	while (++j <= top_index)
		ft_printf("[%d]", stack[j]);
	ft_printf("\n");
}
