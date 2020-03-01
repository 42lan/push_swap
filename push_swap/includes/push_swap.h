/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 11:58:13 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 16:51:48 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"
# include "system_libraries.h"

# define PRINT_OP_OFF 0
# define PRINT_OP_ON 1

/*
** t_stack
**
** stack()->a - stack A
** stack()->b - stack B
** stack()->tia - is the index of top element of stack A
** stack()->tib - is the index of top element of stack B
** stack()->imin[0|1] - is the index of minimal element of stack A|B
** stack()->imax[0|1] - is the index of maximal element of stack A|B
*/

typedef struct	s_stack
{
	int			*a;
	int			*b;
	int			tia;
	int			tib;
	int			imax[2];
	int			imin[2];
}				t_stack;

t_stack			*stack(void);
void			initialize_stack(char **av);

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
