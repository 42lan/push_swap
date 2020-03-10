/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adapted_div.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amalsago <amalsago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 13:44:36 by amalsago          #+#    #+#             */
/*   Updated: 2020/03/10 13:55:48 by amalsago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int		le500(int size)
{
	if (size <= 50)
		return (3);
	else if (size <= 110)
		return (4);
	else if (size <= 170)
		return (5);
	else if (size <= 230)
		return (6);
	else if (size <= 290)
		return (7);
	else if (size <= 360)
		return (8);
	else if (size <= 420)
		return (9);
	else
		return (10);
}

static int		gt500(int size)
{
	if (size <= 540)
		return (11);
	else if (size <= 600)
		return (12);
	else if (size <= 670)
		return (13);
	else if (size <= 730)
		return (14);
	else if (size <= 790)
		return (15);
	else if (size <= 850)
		return (16);
	else if (size <= 910)
		return (17);
	else if (size <= 980)
		return (18);
	else
		return (19);
}

int				adapted_div(int size)
{
	if (size <= 500)
		return (le500(size));
	else if (size > 500)
		return (gt500(size));
	else
		return (2);
}
