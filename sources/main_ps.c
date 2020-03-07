/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/07 17:12:36 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int				main(int ac, char **av)
{
	if (ac < 2 || !**(++av))
		exit(EXIT_FAILURE);
	parse_args(ac, &(av));
	initialize_stack(av);
	sort_stack();

	/*
	int ret = (is_sorted(PRINT_STATUS_ON) == 1) ? 0 : 1;
	free_stack(stack());
	return (ret);
	*/

	free_stack(stack());
	return (0);
}
