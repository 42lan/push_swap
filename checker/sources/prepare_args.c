/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 21:38:06 by amalsago          #+#    #+#             */
/*   Updated: 2020/02/21 21:50:47 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char		**prepare_args(char **av)
{
	char	**new_av;

	new_av = ft_strsplit_spaces(*av);
	return (new_av);
}
