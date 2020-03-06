/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 17:03:15 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/05 14:36:24 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHECKER_H
# define CHECKER_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include "system_libraries.h"

# define PRINT_OP_OFF 0
# define PRINT_OP_ON 1
# define PRINT_KOOK 1

/*
** t_stack
**
** stack()->a - stack A
** stack()->b - stack B
** stack()->tia - is the index of top element of stack A
** stack()->tib - is the index of top element of stack B
*/

typedef struct	s_stack
{
	int			*a;
	int			*b;
	int			tia;
	int			tib;
}				t_stack;

t_stack			*stack(void);
void			initialize_stack(char **av);

int				get_imin(int *stack, int size);
int				get_imax(int *stack, int size);

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
void		execute_operation(char *op, int print_op);
void		pa(int print_op);
void		pb(int print_op);
void		sa(int print_op);
void		sb(int print_op);
void		ss(int print_op);
void		ra(int print_op);
void		rb(int print_op);
void		rr(int print_op);
void		rra(int print_op);
void		rrb(int print_op);
void		rrr(int print_op);

/*
** SORTING
*/

void		sort_stack(void);
int			check_sort(int print_kook);
void		repeat_op(void (*op)(int), int print_op, int n);
void		two_sort(void);
void		three_sort(int *stack_a);
void		four_sort(int *stack_a, int *stack_b);
void		five_sort(void);

/*
** TOOLS
*/

void	print_stack(char stack_name, int *stack, int size);
void	print_stacks_state(void);
void	print_sorted(int moves);

/*
** CHECKER_H
*/
#endif
