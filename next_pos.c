/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   next_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/20 16:46:47 by telain            #+#    #+#             */
/*   Updated: 2016/02/04 17:32:25 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		next_pos(t_tetris tetri, int **square, int pos, int size)
{
	int		i;
	int		j;

	i = pos / 26;
	j = pos % 26;
	square = rem_tetri(tetri, square);
	while (i < size)
	{
		while (++j < size)
		{
			if (can_put(tetri, square, (i * 26 + j), size) == 1)
			{
				return (i * 26 + j);
			}
		}
		j = -1;
		i++;
	}
	return (-1);
}
