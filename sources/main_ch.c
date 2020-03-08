/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/08 00:12:46 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Calling `checker` without arguments or if the argument is empty
** cause exit with failure code error.
*/

static int	read_and_execute(void)
{
	int		moves;
	char	*line;

	moves = 0;
	while (get_next_line(0, &line) > 0)
	{
		if (is_valid_operation(line))
		{
			execute_operation(line, PRINT_OP_OFF);
			++moves;
		}
		else
		{
			free_stack();
			(ERROR_MANAGEMENT) ? ft_putendl(ERR_BADOPERATION) : 0;
			ft_perror_exit("Error");
		}
		ft_strdel(&line);
	}
	return (moves);
}

int			main(int ac, char **av)
{
	int		ret;

	if (ac < 2 || !**(++av))
	{
		(ERROR_MANAGEMENT) ? ft_putendl(NO_ARGUMENTS) : 0;
		exit(EXIT_FAILURE);
	}
	parse_args(ac, &av);
	initialize_stack(av);
	read_and_execute();
	ret = (is_sorted(PRINT_STATUS_ON) == 1) ? 0 : 1;
	free_stack();
	return (ret);
}
