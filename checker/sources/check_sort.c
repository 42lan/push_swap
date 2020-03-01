/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 14:24:36 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 18:04:33 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int			check_sort(int print_kook)
{
	int		i;
	int		min;

	if (stack()->tib != -1)
	{
		(print_kook == 1) ? ft_putendl("KO") : 0;
		return (0);
	}
	i = stack()->tia;
	min = stack()->a[i];
	while (--i >= 0)
	{
		if (stack()->a[i] < min)
		{
			(print_kook == 1) ? ft_putendl("KO") : 0;
			return (0);
		}
		min = stack()->a[i];
	}
	(print_kook == 1) ? ft_putendl("OK") : 0;
	return (1);
}
