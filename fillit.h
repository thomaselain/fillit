/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <cchicote@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 18:47:55 by cchicote          #+#    #+#             */
/*   Updated: 2016/02/06 19:20:36 by cchicote         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"
# include <stdlib.h>
# define T tetri[0]
# define N square[25][25]
# include <fcntl.h>
# include <stdlib.h>

typedef	struct	s_tetris
{
	char	num;
	int		id;
	int		coord[4];
	int		placed;
	int		last;
	int		size;
	int		pos;
	int		nb_piece;
}				t_tetris;

int				dots(char *s, int nb_piece);
int				lines(char *s, int nb_piece);
t_tetris		scan(char *buf, int n, int nb_piece);
int				nb_pieces(char *str);
t_tetris		find_place(t_tetris tetri);
int				start(char *file);
int				**resolve(t_tetris *tetri, int **square);
t_tetris		*new_tetri(void);
int				find_id(t_tetris *tetri);
int				is_i_0(t_tetris *tetri);
int				is_i_90(t_tetris *tetri);
int				is_l_0(t_tetris *tetri);
int				is_l_90(t_tetris *tetri);
int				is_l_180(t_tetris *tetri);
int				is_l_270(t_tetris *tetri);
int				is_f_0(t_tetris *tetri);
int				is_f_90(t_tetris *tetri);
int				is_f_180(t_tetris *tetri);
int				is_f_270(t_tetris *tetri);
int				is_o_0(t_tetris *tetri);
int				is_t_0(t_tetris *tetri);
int				is_t_90(t_tetris *tetri);
int				is_t_180(t_tetris *tetri);
int				is_t_270(t_tetris *tetri);
int				is_z_0(t_tetris *tetri);
int				is_z_90(t_tetris *tetri);
int				is_s_0(t_tetris *tetri);
int				is_s_90(t_tetris *tetri);
int				can_put(t_tetris tetri, int **square, int pos, int size);
int				is_special(t_tetris *tetri);
int				**put_tetri(t_tetris tetri, int **square, int pos, int size);
int				**new_square(void);
void			print_square(int **square, int size);
int				**place_tetri(t_tetris tetri, int **square, int pos);
char			*find_buf(int fd);
int				**rem_tetri(t_tetris tetri, int **square);
int				next_pos(t_tetris tetri, int **square, int pos, int size);
int				verif(char *file);
int				garbage(char *s);
int				each(char*s, int nb_piece);
int				is_real(t_tetris *tetri, int nb_piece);

#endif
