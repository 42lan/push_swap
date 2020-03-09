/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:13:28 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/09 15:40:43 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		is_present(int number, char **av)
{
	int			i;

	i = -1;
	while (av[++i])
		if (number == ft_atoi(av[i]))
			return (FAILURE);
	return (SUCCESS);
}

int				check_dups(char **av)
{
	int			i;
	int			number;

	i = -1;
	while (av[++i])
	{
		number = ft_atoi(av[i]);
		if (is_present(number, av + i + 1))
		{
			(ERROR_MANAGEMENT == 1) ? ft_putendl(ERR_DUPLICATED) : 0;
			return (FAILURE);
		}
	}
	return (SUCCESS);
}

int				check_ints(char **av)
{
	int			i;
	int			j;

	i = -1;
	while (av[++i])
	{
		j = 0;
		if (av[i][j] == '-' || av[i][j] == '+')
		{
			++j;
			if (av[i][j] == '\0')
				return (FAILURE);
		}
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
			{
				(ERROR_MANAGEMENT) ? ft_putendl(ERR_NONINTEGER) : 0;
				return (FAILURE);
			}
			++j;
		}
	}
	return (SUCCESS);
}

static int		is_overflow(char *str)
{
	if (ft_strlen(str) > 11)
		return (FAILURE);
	return (SUCCESS);
}

int				check_lims(char **av)
{
	int			i;
	intmax_t	number;

	i = -1;
	while (av[++i])
	{
		number = ft_atolli(av[i]);
		if (number < INT_MIN || number > INT_MAX || is_overflow(av[i]))
		{
			(ERROR_MANAGEMENT) ? ft_putendl(ERR_INTOVERFLOW) : 0;
			return (FAILURE);
		}
	}
	return (SUCCESS);
}
