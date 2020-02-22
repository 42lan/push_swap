/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:03:15 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 01:34:22 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

						// REMOVE
# include "ft_printf.h" // REMOVE
						// REMOVE
#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"
# include "get_next_line.h"
# include "system_libraries.h"

/*
** STACKS
*/

typedef struct	s_stack
{
	int			*stack_a;
	int			*stack_b;
	int			index_a;
	int			index_b;

}				t_stack;

void			initialize_stack(char **av);
t_stack			*get_stack(void);

/*
** PARSING
*/

void			parse_args(int ac, char ***av);
void			check_ints(char **av);
void			check_dups(char **av);
void			check_lims(char **av);

/*
** OPERATIONS
*/

int			valid_operation(char *op);
void		execute_operation(char *op);
void		sa(void);
void		sb(void);

/*
** TOOLS
*/

void	print_av(char **av);
void	print_stack(int *stack, int size);

/*
** CHECKER_H
*/
#endif
