/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:20:08 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 19:22:31 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(int *a)
{
	if (a[2] > a[1] && a[2] < a[0] && a[1] < a[0])
		sa(PRINT_OP_ON);
	else if (a[2] > a[1] && a[2] > a[0] && a[1] > a[0])
	{
		sa(PRINT_OP_ON);
		rra(PRINT_OP_ON);
	}
	else if (a[2] < a[1] && a[2] < a[0] && a[1] > a[0])
	{
		sa(PRINT_OP_ON);
		ra(PRINT_OP_ON);
	}
	else if (a[2] > a[1] && a[2] > a[0] && a[1] < a[0])
		ra(PRINT_OP_ON);
	else if (a[2] < a[1] && a[2] > a[0] && a[1] > a[0])
		rra(PRINT_OP_ON);
}
