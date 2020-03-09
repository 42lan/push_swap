/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 11:58:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/08 17:30:16 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "colors.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include "system_libraries.h"

# ifndef ERROR_MANAGEMENT
#  define ERROR_MANAGEMENT	0
# endif

# define SUCCESS			0
# define FAILURE			1
# define PRINT_STATUS_OFF	0
# define PRINT_STATUS_ON	1
# define PRINT_OP_OFF		0
# define PRINT_OP_ON		1

# define NO_ARGUMENTS		"No arguments are passed to program"
# define STACK_A_EMPTY		"The stack A is empty"
# define STACK_B_EMPTY		"The stack B is empty"
# define STACK_UNSORTED		"The stack A isn't sorted"
# define CANT_SWAP			"Swap operation cannot be performed"
# define MALLOC_FAILURE		"The allocation of memory failed"
# define ERR_BADOPERATION	"The last operation is invalid"
# define ERR_NONINTEGER		"One of the arguments isn't an integer"
# define ERR_DUPLICATED		"One of the integers is duplicated"
# define ERR_INTOVERFLOW	"One of the integers owerflows"

typedef struct	s_stack
{
	int			*a;
	int			*b;
	int			tia;
	int			tib;
}				t_stack;

t_stack			*stack(void);
void			initialize_stack(char **av);
void			free_stack(void);

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

int				is_valid_operation(char *op);
void			execute_operation(char *op, int print_op);
void			pa(int print_op);
void			pb(int print_op);
void			sa(int print_op);
void			sb(int print_op);
void			ss(int print_op);
void			ra(int print_op);
void			rb(int print_op);
void			rr(int print_op);
void			rra(int print_op);
void			rrb(int print_op);
void			rrr(int print_op);

/*
** SORTING
*/

void			sort_stack(void);
int				is_sorted(int print_status);
void			qsort_ps(t_stack *stack);
void			small_sort(t_stack *stack);
void			sort2(int *a);
void			sort3(int *a);
void			sort4(t_stack *stack);
void			sort5(t_stack *stack);

/*
** TOOLS
*/

int				get_imin(int *stack, int size);
int				get_imax(int *stack, int size);
void			repeat_op(void (*op)(int), int print_op, int n);
void			fast_rotate_a(t_stack *stack, int value, int position);
void			fast_rotate_b(t_stack *stack, int value, int position);
void			print_stack(char stack_name, int *stack, int size);
void			print_stacks_state(void);
void			print_sorted(int moves);

/*
** PUSH_SWAP_H
*/
#endif
