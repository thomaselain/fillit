/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_id.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/09 14:35:09 by telain            #+#    #+#             */
/*   Updated: 2016/02/04 15:35:24 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_tetris		scan(char *buf, int n)
{
	int				i;
	int				num;
	t_tetris		new;

	num = -1;
	i = n * 21 - 1;
	new = new_tetri(&new);
	new.num = n + 65;
	while (++i < (n + 1) * 21)
	{
		if (buf[i] == '#')
			new.coord[++num] = i - n * 21;
	}
	new.id = find_id(&new);
	i = 0;
	while (++i < 4)
		new.coord[i] -= new.coord[0] - is_special(&new);
	new.coord[0] = is_special(&new);
	return (new);
}

int				is_special(t_tetris *t)
{
	if (t->id == 6)
		return (2);
	else if (t->id == 9)
		return (1);
	else if (t->id == 14)
		return (1);
	else if (t->id == 13)
		return (1);
	else if (t->id == 17)
		return (1);
	else if (t->id == 18)
		return (1);
	else
		return (0);
}

int				find_id(t_tetris *t)
{
	t->id = 0;
	(is_i_0(t) == 1) ? t->id = 1 : t->id;
	(is_i_90(t) == 1) ? t->id = 2 : t->id;
	(is_l_0(t) == 1) ? t->id = 3 : t->id;
	(is_l_90(t) == 1) ? t->id = 4 : t->id;
	(is_l_180(t) == 1) ? t->id = 5 : t->id;
	(is_l_270(t) == 1) ? t->id = 6 : t->id;
	(is_f_0(t) == 1) ? t->id = 7 : t->id;
	(is_f_90(t) == 1) ? t->id = 8 : t->id;
	(is_f_180(t) == 1) ? t->id = 9 : t->id;
	(is_f_270(t) == 1) ? t->id = 10 : t->id;
	(is_o_0(t) == 1) ? t->id = 11 : t->id;
	(is_t_0(t) == 1) ? t->id = 12 : t->id;
	(is_t_90(t) == 1) ? t->id = 13 : t->id;
	(is_t_180(t) == 1) ? t->id = 14 : t->id;
	(is_t_270(t) == 1) ? t->id = 15 : t->id;
	(is_z_0(t) == 1) ? t->id = 16 : t->id;
	(is_z_90(t) == 1) ? t->id = 17 : t->id;
	(is_s_0(t) == 1) ? t->id = 18 : t->id;
	(is_s_90(t) == 1) ? t->id = 19 : t->id;
	return (t->id);
}
