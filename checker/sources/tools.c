/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:58:16 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 14:01:53 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	print_av(char **av)
{
	int i = -1;
	while (av[++i])
		ft_printf("[%s]\n", av[i]);
}

void print_stack(int *stack, int size)
{
	int j = -1;
	while (++j <= size)
		ft_printf("[%d]\n", stack[j]);
}
