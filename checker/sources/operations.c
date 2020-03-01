/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:57:15 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 17:45:36 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		valid_operation(char *op)
{
	if (ft_strequ(op, "pa") || ft_strequ(op, "pb")
		|| ft_strequ(op, "sa") || ft_strequ(op, "sb") || ft_strequ(op, "ss")
		|| ft_strequ(op, "ra") || ft_strequ(op, "rb") ||  ft_strequ(op, "rr")
		|| ft_strequ(op, "rra") || ft_strequ(op, "rrb") || ft_strequ(op, "rrr"))
			return (1);
	return (0);
}

void	execute_operation(char *op, int print_op)
{
	ft_strequ(op, "pa") ? pa(print_op): 0;
	ft_strequ(op, "pb") ? pb(print_op): 0;
	ft_strequ(op, "sa") ? sa(print_op): 0;
	ft_strequ(op, "sb") ? sb(print_op): 0;
	ft_strequ(op, "ss") ? ss(print_op): 0;
	ft_strequ(op, "ra") ? ra(print_op): 0;
	ft_strequ(op, "rb") ? rb(print_op): 0;
	ft_strequ(op, "rr") ? rr(print_op): 0;
	ft_strequ(op, "rra") ? rra(print_op): 0;
	ft_strequ(op, "rrb") ? rrb(print_op): 0;
	ft_strequ(op, "rrr") ? rrr(print_op): 0;
}
