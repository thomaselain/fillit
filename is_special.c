/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_special.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telain <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/12 15:10:29 by telain            #+#    #+#             */
/*   Updated: 2016/01/20 16:02:11 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_special(t_tetris *tetri)
{
	if (tetri->id == 6)
		return (2);
	else if (tetri->id == 9)
		return (1);
	else if (tetri->id == 14)
		return (1);
	else if (tetri->id == 13)
		return (1);
	else if (tetri->id == 17)
		return (1);
	else if (tetri->id == 18)
		return (1);
	else
		return (0);
}
