# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mberedda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/03/11 10:46:01 by mberedda          #+#    #+#              #
#    Updated: 2016/03/12 18:41:07 by mberedda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

NAME  =  fdf
SRC   = src/main.c \
		src/parser.c \
		src/map_coor.c \
		src/cleanit.c \
		src/event.c
OBJ   =  $(SRC:.c=.o)
HDR   =  libft/includes/
MLX   =  -L minilibx_macos -lmlx -framework OpenGL -framework AppKit
FLAGS  =  -Wall -Wextra -Werror
CC   =  gcc

%.o: %.c
	@$(CC) $(FLAGS) -I . -I /usr/X11/include/ -o $@ -c $? -g

all: $(NAME)

$(NAME): $(OBJ)
	@make -C minilibx_macos
	@make -C libft/ fclean && make -C libft/ && $(CC) $(FLAGS) -o $(NAME)\
		$(OBJ) libft/libft.a $(MLX)

clean:
	@rm -f $(OBJ)

cleanlib:
	@make -C minilibx_macos/ clean
	@make -C libft/ fclean

fclean: clean cleanlib
	@rm -f $(NAME)

re: fclean all
