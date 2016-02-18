/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/26 19:41:52 by telain            #+#    #+#             */
/*   Updated: 2016/02/06 19:32:07 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_empty(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (0);
}

int		verif(char *file)
{
	int		n;
	int		nb_piece;

	nb_piece = nb_pieces(file);
	n = 0;
	(nb_piece != 0 || nb_piece > 26) ? n++ : n;
	(garbage(file) == 0) ? n++ : n;
	(each(file, nb_piece) == 0) ? n++ : n;
	(is_empty(file) == 0) ? n++ : n;
	(dots(file, nb_piece) == 1) ? n++ : n;
	(lines(file, nb_piece) == 1) ? n++ : n;
	return (n);
}

int		garbage(char *s)
{
	int		i;

	i = -1;
	while (s[++i])
	{
		if (s[i] != '#' && s[i] != '.' && s[i] != '\n')
			return (1);
	}
	return (0);
}

int		each(char *s, int nb_piece)
{
	int		i;
	int		j;
	int		c;

	c = 0;
	j = -1;
	i = -1;
	while (++i < nb_piece)
	{
		while (++j < 21)
		{
			if (s[i * 21 + j] == '#')
				c++;
		}
		if (c != 4)
			return (1);
		c = 0;
		j = -1;
	}
	return (0);
}

int		is_real(t_tetris *tetri, int nb_piece)
{
	int		i;

	i = -1;
	while (++i < nb_piece)
	{
		if (tetri[i].id == 0)
			return (0);
	}
	return (1);
}
