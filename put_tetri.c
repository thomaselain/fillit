/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_tetri.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 14:04:12 by telain            #+#    #+#             */
/*   Updated: 2016/02/03 15:27:50 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**put_tetri(t_tetris tetri, int **square, int pos, int size)
{
	if (can_put(tetri, square, pos, size) == 1)
		square = place_tetri(tetri, square, pos);
	return (square);
}

int		can_put(t_tetris tetri, int **square, int pos, int size)
{
	int		i;
	int		c;

	i = -1;
	c = 0;
	while (++i < 4)
	{
		if (square[pos / 26 + tetri.coord[i] / 5][pos % 26 +
				tetri.coord[i] % 5] == '.'
				&& pos / 26 + tetri.coord[i] / 5 < size
				&& pos % 26 + tetri.coord[i] % 5 < size)
			c++;
	}
	if (c == 4)
		return (1);
	else
		return (0);
}

int		**place_tetri(t_tetris tetri, int **square, int pos)
{
	int		c;

	c = -1;
	while (++c < 4)
		square[pos / 26 + tetri.coord[c] / 5][pos % 26 +
			tetri.coord[c] % 5] = tetri.num;
	tetri.placed = 1;
	tetri.last = pos;
	pos = 0;
	return (square);
}

int		**rem_tetri(t_tetris tetri, int **square)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (++i < 27)
	{
		while (++j < 27)
		{
			if (square[i][j] == tetri.num)
				square[i][j] = '.';
		}
		j = -1;
	}
	tetri.placed = 0;
	return (square);
}
