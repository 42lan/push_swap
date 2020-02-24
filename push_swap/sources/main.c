/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:52:46 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/24 19:19:37 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int			main(int ac, char **av)
{
	if (ac < 2 || !**(++av))
		exit(EXIT_FAILURE);
	parse_args(ac, &av);
	initialize_stack(av);
	sort_stack();
	return (0);
}
