/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:24:36 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/23 16:32:53 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void		check_sort(void)
{
	int		i;
	int		min;

	if (get_stack()->top_index_b != -1)
	{
		ft_printf("Stack B isn't empty\n");// REMOVE
		ft_perror_exit("KO");
	}
	i = get_stack()->top_index_a;
	min = get_stack()->stack_a[i];
	while (--i >= 0)
	{
		if (get_stack()->stack_a[i] < min)
		{
			ft_printf("Stack A isn't sorted\n");// REMOVE
			ft_perror_exit("KO");
		}
		min = get_stack()->stack_a[i];
	}
	ft_putendl("OK");

}
