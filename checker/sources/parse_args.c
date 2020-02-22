/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:02:03 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 13:58:24 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

	new_av = ft_strsplit_spaces(*av);
	if (!*new_av)
	{
		ft_printf("Argument is empty");// REMOVE
		exit(EXIT_FAILURE);
	}
	return (new_av);
}

void			parse_args(int ac, char ***p_av)
{
	char		**av;

	(ac == 2) ? *p_av = prepare_args(*p_av) : 0;
	av = *p_av;
	check_ints(av);
	check_dups(av);
	check_lims(av);
}
