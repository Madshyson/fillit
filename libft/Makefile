# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcourtia <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 16:07:33 by mcourtia          #+#    #+#              #
#    Updated: 2016/01/22 11:35:20 by mcourtia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
SRC        = ft_putchar_fd.c \
	ft_putchar.c \
	ft_memset.c \
	ft_putendl.c \
	ft_putendl_fd.c \
	ft_putnbr.c \
	ft_putnbr_fd.c \
	ft_putstr.c \
	ft_putstr_fd.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strdup.c \
	ft_strcpy.c \
	ft_strncpy.c \
	ft_strcat.c \
	ft_strncat.c \
	ft_strlcat.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strstr.c \
	ft_strnstr.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_itoa.c \
	ft_strsplit.c \
	ft_strtrim.c \
	ft_strjoin.c \
	ft_strsub.c \
	ft_strmapi.c \
	ft_strequ.c \
	ft_strnequ.c \
	ft_strclr.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strmap.c \
	ft_strdel.c \
	ft_strnew.c \
	ft_memdel.c \
	ft_memalloc.c \
	ft_lstnew.c \
	ft_lstdelone.c \
	ft_lstdel.c \
	ft_lstadd.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_strupcase.c \
	ft_strlowcase.c \
	ft_power.c \
	ft_ispunct.c \
	ft_strnlen.c \

OBJ		=$(subst .c,.o,$(SRC))

all: $(NAME)

$(NAME): $(OBJ)
	    ar rc $(NAME) $(OBJ)
		    ranlib $(NAME)

$(OBJ): $(SRC)
	    gcc -Wall -Wextra -Werror -Iincludes/ -c $(SRC)

.PHONY: clean fclean re all

clean:
	    /bin/rm -rf *.o

fclean: clean
	    /bin/rm -f $(NAME)

re: fclean all
