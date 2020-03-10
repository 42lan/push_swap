/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ps.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/10 19:28:21 by amalsago         ###   ########.fr       */
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
	if (is_sorted(PRINT_STATUS_OFF) == FAILURE)
		sort_stack();
	free_stack();
	return (SUCCESS);
}
