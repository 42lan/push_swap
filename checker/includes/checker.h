/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:03:15 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/21 22:09:43 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

						// REMOVE
# include "ft_printf.h" // REMOVE
						// REMOVE
#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"
# include "system_libraries.h"

void			parse_args(int ac, char **av);
char			**prepare_args(char **av);
void			check_ints(char **av);
void			check_dups(char **av);
void			check_lims(char **av);
int				is_present(int number, char **av);

/*
** CHECKER_H
*/
#endif
