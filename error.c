/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/31 15:21:59 by telain            #+#    #+#             */
/*   Updated: 2016/01/31 16:10:16 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		dots(char *s, int nb_piece)
{
	int		i;
	int		n;

	i = -1;
	n = 0;
	while (s[++i])
	{
		if (s[i] == '.')
			n++;
	}
	if (n == nb_piece * 12)
		return (1);
	else
		return (0);
}

int		lines(char *s, int nb_piece)
{
	int		i;
	int		n;

	n = 0;
	i = -1;
	while (s[++i])
	{
		if (s[i] == '\n')
			n++;
	}
	if (n == nb_piece * 5 - 1)
		return (1);
	else
		return (0);
}
