/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:02:03 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/07 23:17:42 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** If there is only one arguments, prepare_args() will split first arguments.
**    Considering that input can be only: ./checker $ARG
**                               and not: ./checker $ARG1 $ARG2
**    split $ARG into array of chars.
**
** check_ints() verify that all arguments are integers
** check_dups() verify that there is no duplicates in arguments
** check_lims() verify that all arguments don't exceed the limits of int
*/


static char		**prepare_args(char **av)
{
	char		**new_av;

	if (!(new_av = ft_strsplit_spaces(*av)))
	{
		(ERROR_MANAGEMENT) ? ft_putendl(MALLOC_FAILURE) : 0;
		exit(EXIT_FAILURE);
	}
	return (new_av);
}

void			parse_args(int ac, char ***p_av)
{
	(ac == 2) ? *p_av = prepare_args(*p_av) : 0;
	if (check_ints(*p_av) || check_dups(*p_av) || check_lims(*p_av))
		ft_perror_exit("Error");
}
