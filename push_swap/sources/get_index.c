/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/01 12:03:03 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 16:56:39 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			get_imin(int *stack, int size)
{
	int		i;
	int		min_index;
	int		min_value;

	i = 0;
	min_index = 0;
	min_value = stack[0];
	while (++i < size)
		if (stack[i] < min_value)
		{
			min_index = i;
			min_value = stack[i];
		}
	return (min_index);
}

int			get_imax(int *stack, int size)
{
	int		i;
	int		max_index;
	int		max_value;

	i = 0;
	max_index = 0;
	max_value = stack[0];
	while (++i < size)
		if (stack[i] > max_value)
		{
			max_index = i;
			max_value = stack[i];
		}
	return (max_index);
}
