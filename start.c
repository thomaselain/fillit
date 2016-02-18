/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/06 18:07:49 by cchicote          #+#    #+#             */
/*   Updated: 2016/02/06 19:32:30 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_tetris	scan(char *buf, int n, int nb_piece)
{
	int				i;
	int				num;
	t_tetris		*new;

	num = -1;
	i = n * 21 - 1;
	new = new_tetri();
	new->nb_piece = nb_piece;
	new->num = n + 65;
	while (++i < (n + 1) * 21)
	{
		if (buf[i] == '#')
			new->coord[++num] = i - n * 21;
	}
	new->id = find_id(new);
	i = 0;
	while (++i < 4)
		new->coord[i] -= new->coord[0] - is_special(new);
	new->coord[0] = is_special(new);
	return (*new);
}

char		*find_buf(int fd)
{
	char	*buf;
	int		ret;

	buf = (char*)ft_memalloc(26 * 21 + 1);
	ret = read(fd, buf, 26 * 21);
	buf[ret] = '\0';
	return (buf);
}

int			start(char *file)
{
	t_tetris		*ptetri;
	t_tetris		tetri[26];
	int				fd;
	int				**square;
	char			*buf;

	fd = open(file, O_RDONLY, S_IREAD);
	square = new_square();
	square[0][0] = -1;
	ptetri = &T;
	buf = find_buf(fd);
	if ((T.nb_piece = nb_pieces(buf)) == -1)
		return (-1);
	while (++square[0][0] < T.nb_piece)
		tetri[square[0][0]] = scan(buf, square[0][0], T.nb_piece);
	if (verif(buf) != 6 || is_real(tetri, T.nb_piece) == 0)
		return (-1);
	T.size = ft_sqrt(T.nb_piece * 4);
	N = 0;
	square[0][0] = '.';
	square = resolve(ptetri, square);
	close(fd);
	return (0);
}
