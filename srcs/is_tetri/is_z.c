/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_z.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:41:18 by telain            #+#    #+#             */
/*   Updated: 2016/01/09 17:44:50 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"

int		is_z_0(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 1
			&& t->coord[2] == t->coord[0] + 6
			&& t->coord[3] == t->coord[0] + 7)
		return (1);
	else
		return (0);
}

int		is_z_90(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 4
			&& t->coord[2] == t->coord[0] + 5
			&& t->coord[3] == t->coord[0] + 9)
		return (1);
	else
		return (0);
}
