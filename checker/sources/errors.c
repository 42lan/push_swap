/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:13:28 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/01 17:45:25 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int		is_present(int number, char **av)
{
	int			i;

	i = -1;
	while (av[++i])
		if (number == ft_atoi(av[i]))
			return (1);
	return (0);
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
			return (1);
	}
	return (0);
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
				return (1);
		}
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (1);
			++j;
		}
	}
	return (0);
}

int				check_lims(char **av)
{
	int			i;
	intmax_t	number;

	i = -1;
	while (av[++i])
	{
		number = ft_atolli(av[i]);
		if (number < INT_MIN || number > INT_MAX)
			return (1);
	}
	return (0);
}
