/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/24 10:20:52 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
		if (valid_operation(line))
		{
			execute_operation(line);
			++moves;
		}
		else
		{
			ft_printf("Invalid operation: [%s]\n", line);// REMOVE
			ft_perror_exit("Error");
		}
		//print_stacks_state();
		ft_strdel(&line);
	}
	return (moves);
}

int			main(int ac, char **av)
{
	int		moves;

	if (ac < 2 || !**(++av))
		exit(EXIT_FAILURE);
	parse_args(ac, &av);
	initialize_stack(av);
	//print_stacks_state();
	moves = read_and_execute();
	check_sort();
	print_sorted(moves);
	return (0);
}
