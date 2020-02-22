/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 21:13:28 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/22 10:10:08 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void			check_ints(char **av)
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
			{
				ft_printf("No number after +/- sign\n");// REMOVE
				ft_perror_exit("Error");
			}
		}
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
			{
				ft_printf("%s isn't a number\n", av[i]);// REMOVE
				ft_perror_exit("Error");
			}
			++j;
		}
	}
}

static int				is_present(int number, char **av)
{
	int			i;

	i = -1;
	while (av[++i])
		if (number == ft_atoi(av[i]))
			return (1);
	return (0);
}

void			check_dups(char **av)
{
	int			i;
	int			number;

	i = -1;
	while (av[++i])
	{
		number = ft_atoi(av[i]);
		if (is_present(number, av + i + 1))
		{
			ft_printf("%s has a duplicate\n", av[i]);// REMOVE
			ft_perror_exit("Error");
		}
	}
}

void			check_lims(char **av)
{
	int			i;
	intmax_t	number;

	i = -1;
	while (av[++i])
	{
		number = ft_atolli(av[i]);
		if (number < INT_MIN || number > INT_MAX)
		{
			ft_printf("%s is < INT_MIN or > INT_MAX\n", av[i]);// REMOVE
			ft_perror_exit("Error");
		}
	}
}
