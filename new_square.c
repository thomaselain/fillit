/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_square.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/13 15:58:52 by telain            #+#    #+#             */
/*   Updated: 2016/02/06 19:29:44 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		**new_square(void)
{
	int		**square;
	int		i;
	int		j;

	i = -1;
	square = (int**)malloc(sizeof(int*) * 26 + 1);
	while (++i < 27)
	{
		square[i] = (int*)malloc(sizeof(int) * 26 + 1);
		square[i][26] = -1;
	}
	i = -1;
	j = -1;
	while (++i < 27)
	{
		while (++j < 26)
		{
			square[i][j] = '.';
		}
		j = -1;
	}
	square[26][0] = -1;
	return (square);
}
