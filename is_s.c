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

#include "fillit.h"

int		is_s_0(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 1
			&& tetri->coord[2] == tetri->coord[0] + 4
			&& tetri->coord[3] == tetri->coord[0] + 5)
		return (1);
	else
		return (0);
}

int		is_s_90(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 5
			&& tetri->coord[2] == tetri->coord[0] + 6
			&& tetri->coord[3] == tetri->coord[0] + 11)
		return (1);
	else
		return (0);
}
