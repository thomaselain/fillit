/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_t.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:39:37 by telain            #+#    #+#             */
/*   Updated: 2016/03/21 15:04:06 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"

int		is_t_0(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 1
			&& t->coord[2] == t->coord[0] + 2
			&& t->coord[3] == t->coord[0] + 6)
		return (1);
	else
		return (0);
}

int		is_t_90(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 4
			&& t->coord[2] == t->coord[0] + 5
			&& t->coord[3] == t->coord[0] + 10)
		return (1);
	else
		return (0);
}

int		is_t_180(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 4
			&& t->coord[2] == t->coord[0] + 5
			&& t->coord[3] == t->coord[0] + 6)
		return (1);
	else
		return (0);
}

int		is_t_270(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 5
			&& t->coord[2] == t->coord[0] + 6
			&& t->coord[3] == t->coord[0] + 10)
		return (1);
	else
		return (0);
}
