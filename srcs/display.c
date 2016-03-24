/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 17:10:54 by cchicote          #+#    #+#             */
/*   Updated: 2016/03/24 15:46:09 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void		display_grid(t_env *e)
{
	int		i;
	int		j;

	i = -1;
	while (++i <= e->ssize)
	{
		j = -1;
		while (++j <= e->ssize)
			ft_putchar(e->sq[i][j]);
		ft_putchar('\n');
	}
}
