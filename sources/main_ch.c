/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/09 10:34:24 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Calling `checker` without arguments or if the argument is empty
** cause exit with failure code error.
*/

static void		read_and_execute(void)
{
	char		*line;

	while (get_next_line(0, &line) > 0)
	{
		if (is_valid_operation(line) == SUCCESS)
			execute_operation(line, PRINT_OP_OFF);
		else
		{
			free_stack();
			(ERROR_MANAGEMENT) ? ft_putendl(ERR_BADOPERATION) : 0;
			ft_perror_exit(SGR_FG_RED"Error"SGR_NORMAL);
		}
		ft_strdel(&line);
	}
}

int				main(int ac, char **av)
{
	int			ret;

	if ((--ac) == 0 || !**(++av))
	{
		(ERROR_MANAGEMENT) ? ft_putendl(NO_ARGUMENTS) : 0;
		exit(EXIT_FAILURE);
	}
	parse_args(ac, &av);
	if (initialize_stack(ac, av) == FAILURE)
		exit(EXIT_FAILURE);
	read_and_execute();
	ret = (is_sorted(PRINT_STATUS_ON) == SUCCESS) ? SUCCESS : FAILURE;
	free_stack();
	return (ret);
}
