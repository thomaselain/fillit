/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_l.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:32:03 by telain            #+#    #+#             */
/*   Updated: 2016/01/12 14:54:08 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"

int		is_l_0(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 5
			&& t->coord[2] == t->coord[0] + 10
			&& t->coord[3] == t->coord[0] + 11)
		return (1);
	else
		return (0);
}

int		is_l_90(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 1
			&& t->coord[2] == t->coord[0] + 2
			&& t->coord[3] == t->coord[0] + 5)
		return (1);
	else
		return (0);
}

int		is_l_180(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 1
			&& t->coord[2] == t->coord[0] + 6
			&& t->coord[3] == t->coord[0] + 11)
		return (1);
	else
		return (0);
}

int		is_l_270(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 3
			&& t->coord[2] == t->coord[0] + 4
			&& t->coord[3] == t->coord[0] + 5)
		return (1);
	else
		return (0);
}
