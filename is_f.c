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

#include "fillit.h"

int		is_f_0(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 1
			&& tetri->coord[2] == tetri->coord[0] + 5
			&& tetri->coord[3] == tetri->coord[0] + 10)
		return (1);
	else
		return (0);
}

int		is_f_90(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 1
			&& tetri->coord[2] == tetri->coord[0] + 2
			&& tetri->coord[3] == tetri->coord[0] + 7)
		return (1);
	else
		return (0);
}

int		is_f_180(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 5
			&& tetri->coord[2] == tetri->coord[0] + 9
			&& tetri->coord[3] == tetri->coord[0] + 10)
		return (1);
	else
		return (0);
}

int		is_f_270(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 5
			&& tetri->coord[2] == tetri->coord[0] + 6
			&& tetri->coord[3] == tetri->coord[0] + 7)
		return (1);
	else
		return (0);
}
