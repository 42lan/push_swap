/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/09 08:15:06 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int ac, char **av)
{
	if ((--ac) == 0 || !**(++av))
	{
		(ERROR_MANAGEMENT) ? ft_putendl(NO_ARGUMENTS) : 0;
		exit(EXIT_FAILURE);
	}
	parse_args(ac, &(av));
	if (initialize_stack(ac, av) == FAILURE)
		exit(EXIT_FAILURE);
	sort_stack();

	/*
	int ret = (is_sorted(PRINT_STATUS_ON) == SUCCESS) ? 0 : 1;
	free_stack();
	return (ret);
	*/

	free_stack();
	return (SUCCESS);
}
