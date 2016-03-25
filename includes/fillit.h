/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cchicote <cchicote@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/23 18:47:55 by cchicote          #+#    #+#             */
/*   Updated: 2016/03/21 15:17:42 by telain           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include "../libft/includes/libft.h"
# include <stdlib.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <stdio.h>

typedef	struct	s_tetris
{
	int				id;
	char			num;
	int				coord[4];
	int				xy[2];
	int				placed;
}				t_tetris;

typedef struct	s_env
{
	t_tetris		t[26];
	char			*buf;
	char			*file;
	int				nb_piece;
	int				smax;
	int				ssize;
	int				**sq;
	int				n;
}				t_env;

void			c_pieces(t_env *e);
int				verif(t_env *e);
int				garbage(char *s);
int				c_hash(char *s, int nb_piece);
int				c_dots(char *s, int nb_piece);
int				c_lines(char *s, int nb_piece);
int				is_i_0(t_tetris *t);
int				is_i_90(t_tetris *t);
int				is_l_0(t_tetris *t);
int				is_l_90(t_tetris *t);
int				is_l_180(t_tetris *t);
int				is_l_270(t_tetris *t);
int				is_f_0(t_tetris *t);
int				is_f_90(t_tetris *t);
int				is_f_180(t_tetris *t);
int				is_f_270(t_tetris *t);
int				is_o_0(t_tetris *t);
int				is_t_0(t_tetris *t);
int				is_t_90(t_tetris *t);
int				is_t_180(t_tetris *t);
int				is_t_270(t_tetris *t);
int				is_z_0(t_tetris *t);
int				is_z_90(t_tetris *t);
int				is_s_0(t_tetris *t);
int				is_s_90(t_tetris *t);
int				find_id(t_tetris *t);
int				is_special(t_tetris *t);
t_tetris		scan(char *buf, int n);
t_env			*new_env(t_env *new);
void			read_file(t_env *e);
void			new_square(t_env *e);
t_tetris		new_tetri(t_tetris *new);
void			place(t_env *e, int x, int y);
void			display_grid(t_env *e);
int				can_place(t_env *e);
t_env			*resolve(t_env *e);
int				next_pos(t_env *e);
void			remove_t(t_env *e);
void			check_placed(t_env *e);
void			reset_pos(t_env *e);

#endif
