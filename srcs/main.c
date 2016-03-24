/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 17:46:28 by cchicote          #+#    #+#             */
/*   Updated: 2016/03/24 15:46:19 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			main(int argc, char **argv)
{
	t_env		*e;
	int			i;

	e = NULL;
	i = -1;
	if (argc != 2)
	{
		ft_putendl("usage : './fillit fichier'.");
		return (0);
	}
	e = new_env(e);
	e->file = argv[1];
	read_file(e);
	c_pieces(e);
	while (++i < e->nb_piece && i < 26)
		e->t[i] = scan(e->buf, i);
	if (verif(e) == 1)
		return (0);
	new_square(e);
	resolve(e);
	display_grid(e);
	free(e);
	return (0);
}
