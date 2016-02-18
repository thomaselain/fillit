/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_pieces.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <cchicote@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/15 16:28:13 by cchicote          #+#    #+#             */
/*   Updated: 2016/02/04 18:00:44 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		nb_pieces(char *str)
{
	int		index;
	int		hash;
	int		dot;

	hash = 0;
	index = 0;
	dot = 0;
	while (str[index] != '\0')
	{
		if (str[index] == '#')
			hash++;
		else if (str[index] == '.')
			dot++;
		index++;
	}
	if (hash % 4 != 0 || dot % 12 != 0 || dot == 0 || hash == 0)
	{
		return (-1);
	}
	return (hash / 4);
}
