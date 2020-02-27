/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 11:58:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/27 12:52:58 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "get_next_line.h"
# include "system_libraries.h"

int check_sort(void); //REMOVE

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

void			sort_stack(void);

/*
** PARSING
*/

void			parse_args(int ac, char ***av);
int				check_ints(char **av);
int				check_dups(char **av);
int				check_lims(char **av);

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

/*
** SORTING
*/

void		repeat_op(void (*op)(), int times);
void		two_sort(int *s_a);
void		three_sort(int *s_a);
void		four_sort(int *s_a, int *s_b);
void		five_sort(int *s_a, int *s_b);

/*
** TOOLS
*/

void	print_stack(char stack_name, int *stack, int size);
void	print_stacks_state(void);
void	print_sorted(int moves);

/*
** PUSH_SWAP_H
*/
#endif
