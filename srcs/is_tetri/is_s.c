/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:42:13 by telain            #+#    #+#             */
/*   Updated: 2016/01/09 17:45:30 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fillit.h"

int		is_s_0(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 1
			&& t->coord[2] == t->coord[0] + 4
			&& t->coord[3] == t->coord[0] + 5)
		return (1);
	else
		return (0);
}

int		is_s_90(t_tetris *t)
{
	if (t->coord[1] == t->coord[0] + 5
			&& t->coord[2] == t->coord[0] + 6
			&& t->coord[3] == t->coord[0] + 11)
		return (1);
	else
		return (0);
}
