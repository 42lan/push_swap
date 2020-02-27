/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/27 10:06:47 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int ac, char **av)
{
	if (ac < 2 || !**(++av))
		exit(EXIT_FAILURE);
	parse_args(ac, &av);
	initialize_stack(av);
	if (get_stack()->top_index_a == 0 && get_stack()->top_index_b == -1)
		ft_printf("Only one elements in STACK A and nothin in STACK B\n");
	else
		sort_stack();
	check_sort(); // REMOOOOVE
	return (0);
}
