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

#include "fillit.h"

int		is_l_0(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 5
			&& tetri->coord[2] == tetri->coord[0] + 10
			&& tetri->coord[3] == tetri->coord[0] + 11)
		return (1);
	else
		return (0);
}

int		is_l_90(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 1
			&& tetri->coord[2] == tetri->coord[0] + 2
			&& tetri->coord[3] == tetri->coord[0] + 5)
		return (1);
	else
		return (0);
}

int		is_l_180(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 1
			&& tetri->coord[2] == tetri->coord[0] + 6
			&& tetri->coord[3] == tetri->coord[0] + 11)
		return (1);
	else
		return (0);
}

int		is_l_270(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 3
			&& tetri->coord[2] == tetri->coord[0] + 4
			&& tetri->coord[3] == tetri->coord[0] + 5)
		return (1);
	else
		return (0);
}
