/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:24:36 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 13:09:27 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			check_sort(void)
{
	int		i;
	int		min;

	if (stack()->tib != -1)
		return (0);
	i = stack()->tia;
	min = stack()->a[i];
	while (--i >= 0)
	{
		if (stack()->a[i] < min)
			return (0);
		min = stack()->a[i];
	}
	return (1);
}
