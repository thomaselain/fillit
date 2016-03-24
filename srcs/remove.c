/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:10:54 by cchicote          #+#    #+#             */
/*   Updated: 2016/03/21 15:09:15 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void		remove_t(t_env *e)
{
	int		i;
	int		j;

	i = 0;
	while (i < e->smax)
	{
		j = 0;
		while (j < e->smax)
		{
			if (e->sq[i][j] == e->t[e->n].num)
				e->sq[i][j] = '.';
			j++;
		}
		i++;
	}
}

void		check_placed(t_env *e)
{
	if (e->t[e->n].placed == 1)
	{
		remove_t(e);
		e->t[e->n].placed = 0;
	}
}

void		reset_pos(t_env *e)
{
	check_placed(e);
	e->t[e->n].xy[0] = 0;
	e->t[e->n].xy[1] = 0;
}
