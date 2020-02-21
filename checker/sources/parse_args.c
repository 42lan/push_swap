/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:02:03 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/21 22:13:28 by amalsago         ###   ########.fr       */
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

void	p(char **av)
{
	int i = -1;
	while (av[++i])
		ft_printf("[%s]\n", av[i]);
}

void	parse_args(int ac, char **av)
{
	(ac == 2) ? av = prepare_args(av) : 0;
	check_ints(av);
	check_dups(av);
	check_lims(av);
}
