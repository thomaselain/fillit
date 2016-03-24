/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:10:54 by cchicote          #+#    #+#             */
/*   Updated: 2016/03/24 15:46:31 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void		place(t_env *e, int x, int y)
{
	int		i;

	i = -1;
	check_placed(e);
	while (++i < 4)
		e->sq[y + e->t[e->n].coord[i] / 5]
			[x + e->t[e->n].coord[i] % 5] = e->t[e->n].num;
	e->t[e->n].placed = 1;
}

int			can_place(t_env *e)
{
	int		i;
	int		c;

	i = -1;
	c = 0;
	while (++i < 4)
	{
		if (e->sq[e->t[e->n].xy[1] + e->t[e->n].coord[i] / 5]
			[e->t[e->n].xy[0] + e->t[e->n].coord[i] % 5] == '.'
			&& (e->t[e->n].xy[1] + e->t[e->n].coord[i] / 5) <= e->ssize
			&& (e->t[e->n].xy[0] + e->t[e->n].coord[i] % 5) <= e->ssize)
			c++;
	}
	if (c == 4)
		return (0);
	return (1);
}

int			next_pos(t_env *e)
{
	while (e->t[e->n].xy[1] <= e->ssize)
	{
		while (e->t[e->n].xy[0] <= e->ssize)
		{
			if (can_place(e) == 0)
				return (0);
			e->t[e->n].xy[0]++;
		}
		e->t[e->n].xy[0] = 0;
		e->t[e->n].xy[1]++;
	}
	e->t[e->n].xy[0] = 0;
	e->t[e->n].xy[1] = 0;
	return (-1);
}

t_env		*resolve(t_env *e)
{
	check_placed(e);
	if (e->n < e->nb_piece)
	{
		if (can_place(e) == 0)
		{
			place(e, e->t[e->n].xy[0], e->t[e->n].xy[1]);
			e->n++;
			return (resolve(e));
		}
		if (next_pos(e) == -1)
		{
			if (e->n == 0)
			{
				e->ssize++;
				reset_pos(e);
				return (resolve(e));
			}
			reset_pos(e);
			e->n--;
			e->t[e->n].xy[0]++;
			return (resolve(e));
		}
		return (resolve(e));
	}
	return (e);
}
