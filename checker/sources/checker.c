/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/23 17:45:51 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

/*
** Calling `checker` without arguments or if the argument is empty
** cause exit with failure code error.
*/

int			main(int ac, char **av)
{
	char	*line;
	int		moves;

	moves = 0;
	if (ac < 2 || !**(++av))
		exit(EXIT_FAILURE);
	parse_args(ac, &av);
	initialize_stack(av);


	ft_printf("A:");
	print_stack(get_stack()->stack_a, get_stack()->top_index_a);
	ft_printf("B:");
	print_stack(get_stack()->stack_b, get_stack()->top_index_b);

	while (get_next_line(0, &line) > 0)
	{
		if (!*line)
			break;
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

		ft_printf("A:");
		print_stack(get_stack()->stack_a, get_stack()->top_index_a);
		ft_printf("B:");
		print_stack(get_stack()->stack_b, get_stack()->top_index_b);
	}
	check_sort();
	print_sorted(moves);
	return (0);
}
