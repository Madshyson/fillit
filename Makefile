# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/01/21 17:20:11 by mcourtia          #+#    #+#              #
#    Updated: 2016/01/23 16:22:03 by mcourtia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

LIB = libft/libft.a

SRC =	ft_read.c \
		ft_conditions.c \
		ft_split.c \
		ft_resplit.c \
		ft_setupleft.c \
		ft_createmap.c \
		ft_createtmp.c \
		ft_checkmap.c \
		ft_move.c \
		ft_print.c

.PHONY: all clean flcean re

all:
	make -C libft all
	gcc -Wall -Wextra -Werror $(SRC) $(LIB) -Ilibft -o $(NAME)

clean:
	make -C libft clean
	rm -rf *.o

fclean: clean
	make -C libft fclean
	rm -rf $(NAME)

re: fclean all
	make -C libft re
