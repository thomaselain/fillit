/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_f.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:36:34 by telain            #+#    #+#             */
/*   Updated: 2016/01/12 15:00:31 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"

int		is_f_0(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 1
			&& t->coord[2] == t->coord[0] + 5
			&& t->coord[3] == t->coord[0] + 10)
		return (1);
	else
		return (0);
}

int		is_f_90(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 1
			&& t->coord[2] == t->coord[0] + 2
			&& t->coord[3] == t->coord[0] + 7)
		return (1);
	else
		return (0);
}

int		is_f_180(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 5
			&& t->coord[2] == t->coord[0] + 9
			&& t->coord[3] == t->coord[0] + 10)
		return (1);
	else
		return (0);
}

int		is_f_270(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 5
			&& t->coord[2] == t->coord[0] + 6
			&& t->coord[3] == t->coord[0] + 7)
		return (1);
	else
		return (0);
}
