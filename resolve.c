/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/08 14:40:22 by telain            #+#    #+#             */
/*   Updated: 2016/02/06 19:29:03 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			**resolve_a(t_tetris *tetri, int **square)
{
	square = rem_tetri(tetri[N], square);
	square = place_tetri(tetri[N], square, T.pos);
	tetri[N].placed = 1;
	tetri[N].last = T.pos;
	T.pos = 0;
	N++;
	return (square);
}

int			**resolve_b(t_tetris *tetri, int **square)
{
	if (tetri[N].last ==
			next_pos(tetri[N], square, T.pos, T.size))
	{
		T.pos++;
		return (square);
	}
	T.pos = next_pos(tetri[N], square, T.pos, T.size);
	square = rem_tetri(tetri[N], square);
	square = place_tetri(tetri[N], square, T.pos);
	tetri[N].placed = 1;
	tetri[N].last = T.pos;
	T.pos = 0;
	N++;
	return (square);
}

int			**resolve_c(t_tetris *tetri, int **square)
{
	tetri[N].last = T.pos;
	if (tetri[N].placed == 1)
		square = rem_tetri(tetri[N], square);
	tetri[N].placed = 0;
	T.pos = 0;
	if (N > 0)
	{
		T.pos = tetri[N - 1].last;
		N--;
		return (square);
	}
	if (N == 0)
	{
		T.size++;
		return (square);
	}
	N--;
	return (square);
}

int			**resolve(t_tetris *tetri, int **square)
{
	if (N == T.nb_piece)
	{
		print_square(square, T.size);
		return (square);
	}
	if (can_put(tetri[N], square, T.pos, T.size) == 1)
	{
		square = resolve_a(tetri, square);
		return (resolve(tetri, square));
	}
	if (can_put(tetri[N], square, T.pos, T.size) == 0)
	{
		if (next_pos(tetri[N], square, T.pos, T.size) != -1)
		{
			square = resolve_b(tetri, square);
			return (resolve(tetri, square));
		}
		else
		{
			square = resolve_c(tetri, square);
			return (resolve(tetri, square));
		}
	}
	return (square);
}
