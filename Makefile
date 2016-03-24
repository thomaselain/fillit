# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: telain <telain@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/29 02:14:13 by telain            #+#    #+#              #
#    Updated: 2016/03/24 15:47:34 by telain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_GREEN = "\033[0;32m"
C_NOCOLOR = "\033[0m"
NAME = fillit
FLAG = -Wall -Wextra -Werror
SRC_DIR = srcs/
SRC_BASE =	main.c c_pieces.c error.c\
			is_tetri/is_f.c is_tetri/is_i.c\
			is_tetri/is_l.c is_tetri/is_o.c\
			is_tetri/is_s.c is_tetri/is_t.c\
			is_tetri/is_z.c\
			find_id.c read_file.c\
			resolve.c display.c new.c remove.c
CC = gcc
HEAD = includes/fillit.h

OBJ = $(patsubst %.c, %.o, $(addprefix $(SRC_DIR), $(SRC_BASE)))

all: $(NAME)

$(NAME) : $(OBJ) $(HEAD)
	@make -C libft/
	@printf "Compiling $(NAME) ...\n"
	@$(CC) $(FLAG) -o $(NAME) $(OBJ) -L./libft -lft
	@printf "//\e[32mfillit succesfuly compiled\e[0m//"

clean:
	@make -C libft/ clean
	@/bin/rm -f $(OBJ)

fclean: clean
	@make -C libft/ fclean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean
