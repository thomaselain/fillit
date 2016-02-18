/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_id.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 14:35:09 by telain            #+#    #+#             */
/*   Updated: 2016/02/06 19:21:51 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetris		*new_tetri(void)
{
	t_tetris	*new;

	new = (t_tetris*)ft_memalloc(sizeof(t_tetris));
	ft_bzero(new, sizeof(t_tetris));
	new->last = -1;
	return (new);
}

int				find_id(t_tetris *tetri)
{
	tetri->id = 0;
	(is_i_0(tetri) == 1) ? tetri->id = 1 : tetri->id;
	(is_i_90(tetri) == 1) ? tetri->id = 2 : tetri->id;
	(is_l_0(tetri) == 1) ? tetri->id = 3 : tetri->id;
	(is_l_90(tetri) == 1) ? tetri->id = 4 : tetri->id;
	(is_l_180(tetri) == 1) ? tetri->id = 5 : tetri->id;
	(is_l_270(tetri) == 1) ? tetri->id = 6 : tetri->id;
	(is_f_0(tetri) == 1) ? tetri->id = 7 : tetri->id;
	(is_f_90(tetri) == 1) ? tetri->id = 8 : tetri->id;
	(is_f_180(tetri) == 1) ? tetri->id = 9 : tetri->id;
	(is_f_270(tetri) == 1) ? tetri->id = 10 : tetri->id;
	(is_o_0(tetri) == 1) ? tetri->id = 11 : tetri->id;
	(is_t_0(tetri) == 1) ? tetri->id = 12 : tetri->id;
	(is_t_90(tetri) == 1) ? tetri->id = 13 : tetri->id;
	(is_t_180(tetri) == 1) ? tetri->id = 14 : tetri->id;
	(is_t_270(tetri) == 1) ? tetri->id = 15 : tetri->id;
	(is_z_0(tetri) == 1) ? tetri->id = 16 : tetri->id;
	(is_z_90(tetri) == 1) ? tetri->id = 17 : tetri->id;
	(is_s_0(tetri) == 1) ? tetri->id = 18 : tetri->id;
	(is_s_90(tetri) == 1) ? tetri->id = 19 : tetri->id;
	return (tetri->id);
}
