/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:10:54 by cchicote          #+#    #+#             */
/*   Updated: 2016/03/15 17:10:55 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_env		*new_env(t_env *new)
{
	new = ft_memalloc(sizeof(t_env));
	new->buf = ft_strnew(546);
	new->nb_piece = 0;
	new->n = 0;
	return (new);
}

t_tetris	new_tetri(t_tetris *new)
{
	new = ft_memalloc(sizeof(t_tetris));
	new->id = 0;
	new->xy[0] = 0;
	new->xy[1] = 0;
	return (*new);
}

void		new_square(t_env *e)
{
	int		i;
	int		j;

	i = -1;
	e->smax = e->nb_piece * 4;
	e->sq = ft_memalloc(sizeof(int*) * e->smax);
	while (++i < e->smax)
	{
		j = -1;
		e->sq[i] = ft_memalloc(sizeof(int) * e->smax);
		while (++j < e->smax)
			e->sq[i][j] = '.';
	}
	e->ssize = ft_sqrt(e->nb_piece * 4) - 1;
}
