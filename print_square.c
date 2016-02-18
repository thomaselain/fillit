/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_square.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 18:44:48 by telain            #+#    #+#             */
/*   Updated: 2016/02/04 18:41:06 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		empty(int **square, int size)
{
	int		i;
	int		j;

	i = -1;
	j = -1;
	while (++j < size)
	{
		while (++i < size)
		{
			if (square[i][j] != '.')
				return (0);
		}
		i = -1;
	}
	return (1);
}

void	print_square(int **square, int size)
{
	int		j;
	int		i;

	j = -1;
	i = -1;
	if (!(empty(square, size)))
	{
		while (++i < size)
		{
			while (++j < size)
			{
				ft_putchar(square[i][j]);
			}
			ft_putchar('\n');
			j = -1;
		}
	}
}
