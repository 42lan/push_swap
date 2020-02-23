/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:03:15 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/23 14:25:35 by amalsago         ###   ########.fr       */
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
**
** top_index_a - is the top element of stack_a
** top_index_b - is the top element of stack_b
*/

typedef struct	s_stack
{
	int			*stack_a;
	int			*stack_b;
	int			top_index_a;
	int			top_index_b;
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
void		pa(void);
void		pb(void);
void		sa(void);
void		sb(void);
void		ss(void);
void		ra(void);
void		rb(void);
void		rr(void);
void		rra(void);
void		rrb(void);
void		rrr(void);


void		check_sort(void);

/*
** TOOLS
*/

void	print_av(char **av);
void	print_stack(int *stack, int size);

/*
** CHECKER_H
*/
#endif
