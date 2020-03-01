/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 10:20:08 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 14:57:14 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(int *sta)
{
	if (sta[2] > sta[1] && sta[2] < sta[0] && sta[1] < sta[0])
		sa(PRINT_OP_ON);
	else if (sta[2] > sta[1] && sta[2] > sta[0] && sta[1] > sta[0])
	{
		sa(PRINT_OP_ON);
		rra(PRINT_OP_ON);
	}
	else if (sta[2] < sta[1] && sta[2] < sta[0] && sta[1] > sta[0])
	{
		sa(PRINT_OP_ON);
		ra(PRINT_OP_ON);
	}
	else if (sta[2] > sta[1] && sta[2] > sta[0] && sta[1] < sta[0])
		ra(PRINT_OP_ON);
	else if (sta[2] < sta[1] && sta[2] > sta[0] && sta[1] > sta[0])
		rra(PRINT_OP_ON);
}
