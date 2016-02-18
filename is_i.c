/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_i.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 15:26:56 by telain            #+#    #+#             */
/*   Updated: 2016/01/09 17:40:34 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_i_0(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 5
			&& tetri->coord[2] == tetri->coord[0] + 10
			&& tetri->coord[3] == tetri->coord[0] + 15)
		return (1);
	else
		return (0);
}

int		is_i_90(t_tetris *tetri)
{
	if (tetri->coord[1] == tetri->coord[0] + 1
			&& tetri->coord[2] == tetri->coord[0] + 2
			&& tetri->coord[3] == tetri->coord[0] + 3)
		return (1);
	else
		return (0);
}
