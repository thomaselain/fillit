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

#include "fillit.h"

int		is_z_0(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 1
			&& tetri->coord[2] == tetri->coord[0] + 6
			&& tetri->coord[3] == tetri->coord[0] + 7)
		return (1);
	else
		return (0);
}

int		is_z_90(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 4
			&& tetri->coord[2] == tetri->coord[0] + 5
			&& tetri->coord[3] == tetri->coord[0] + 9)
		return (1);
	else
		return (0);
}
