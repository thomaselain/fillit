/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 17:56:51 by cchicote          #+#    #+#             */
/*   Updated: 2016/03/11 17:56:52 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int			c_lines(char *s, int nb_piece)
{
	int		i;
	int		l;

	l = 0;
	i = -1;
	while (s[++i] != '\0')
	{
		if (s[i] == '\n')
			l++;
	}
	if (l != nb_piece * 5 - 1)
		return (1);
	return (0);
}

int			garbage(char *s)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '.' && s[i] != '\n' && s[i] != '#')
			return (1);
		i++;
	}
	return (0);
}

int			c_hash(char *s, int nb_piece)
{
	int		i;
	int		j;
	int		c;

	c = 0;
	i = 0;
	j = 0;
	while (i < nb_piece)
	{
		while (j < 21)
		{
			if (s[i * 21 + j] == '#')
				c++;
			j++;
		}
		if (c != 4)
			return (1);
		c = 0;
		j = 0;
		i++;
	}
	return (0);
}

int			c_dots(char *s, int nb_piece)
{
	int		i;
	int		d;

	i = 0;
	d = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '.')
			d++;
		i++;
	}
	if (d != nb_piece * 12)
		return (1);
	return (0);
}

int			verif(t_env *e)
{
	int			i;

	i = -1;
	if (c_lines(e->buf, e->nb_piece) == 1 || garbage(e->buf) == 1
		|| c_hash(e->buf, e->nb_piece) == 1 || c_dots(e->buf, e->nb_piece) == 1
		|| e->nb_piece > 26)
	{
		ft_putendl("error");
		return (1);
	}
	while (++i < e->nb_piece)
	{
		if (e->t[i].id == 0)
		{
			ft_putendl("error");
			return (1);
		}
	}
	return (0);
}
