/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:39:08 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/03 20:13:25 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void			sort_stack(void)
{
	unsigned	size_a;

	size_a = stack()->tia + 1;
	if (size_a == 2)
		sort2(stack()->a);
	else if (size_a == 3)
		sort3(stack()->a);
	else if (size_a == 4)
		sort4(stack());
	else if (size_a == 5)
		sort5(stack());
	else
		qsort_ps(stack());
	//(check_sort() == 1) ? ft_printf("OK\n") : ft_putendl("  ^\n /!\\ ERROR STACK ISN'T SORTED\n ¯¯¯");
}
