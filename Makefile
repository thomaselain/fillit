# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: telain <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/08 17:25:40 by telain            #+#    #+#              #
#    Updated: 2016/02/06 19:24:17 by cchicote         ###   ########.fr        #
#                                                                              # 
# **************************************************************************** #

NAME = fillit

HEADER = fillit.h

SRC = find_id.c\
	  is_special.c\
	  main.c\
	  nb_pieces.c\
	  new_square.c\
	  print_square.c\
	  put_tetri.c \
	  resolve.c\
	  next_pos.c\
	  start.c\
	  verif.c\
	  error.c\
	  is_f.c\
	  is_i.c\
	  is_l.c\
	  is_o.c\
	  is_s.c\
	  is_t.c\
	  is_z.c 

FLAG = -Wall -Werror -Wextra

OBJS = $(SRC:.c=.o)

LIB = libft.a

all: $(NAME)

$(NAME):
	@gcc -c $(FLAG) $(SRC)
	@gcc $(FLAG) -o $(NAME) -L. -lft $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME) 

re: fclean all
