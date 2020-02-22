/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:57:15 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 13:58:01 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int			valid_operation(char *op)
{
	if (ft_strequ(op, "sa") || ft_strequ(op, "sb") || ft_strequ(op, "ss")
		|| ft_strequ(op, "ra") || ft_strequ(op, "rb") ||  ft_strequ(op, "rr")
		|| ft_strequ(op, "rra") || ft_strequ(op, "rrb") || ft_strequ(op, "rrr")
		|| ft_strequ(op, "pa") || ft_strequ(op, "pb"))
			return (1);
	return (0);
}

void		execute_operation(char *op)
{
	ft_strequ(op, "sa") ? sa(): 0;
	/*
	ft_strequ(op, "sb")
	ft_strequ(op, "ss")
	ft_strequ(op, "ra")
	ft_strequ(op, "rb")
	ft_strequ(op, "rr")
	ft_strequ(op, "rra")
	ft_strequ(op, "rrb")
	ft_strequ(op, "rrr")
	ft_strequ(op, "pa")
	ft_strequ(op, "pb")
	*/
}
