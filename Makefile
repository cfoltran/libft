# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 13:28:57 by clfoltra          #+#    #+#              #
#    Updated: 2018/11/07 18:56:14 by clfoltra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = ft_putstr.c ft_putchar.c ft_putnbr.c ft_putendl.c ft_putchar_fd.c \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd.c strlen.c ft_strdup.c \
		ft_strcpy.c ft_strncpy ft_strcmp ft_atoi ft_isalpha ft_isdigit \
		ft_isascii ft_isprint ft_toupper ft_tolower ft_isalnum ft_memset \
		ft_bzero ft_memcpy ft_memccpy ft_memmove ft_strchr ft_memalloc \
		ft_memdel ft_strnew ft_strdel ft_strclr ft_striter ft_strmap \
		ft_strmapi ft_strequ ft_strnequ ft_bzero ft_strcat ft_strsub \
		ft_strjoin ft_strtrim ft_strstr \

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
#	gcc -c -Wall -Wextra -Werror $(SRC)
#	gcc $(OBJ) -o $(NAME)
	ar rc $(NAME).a $(OBJ)
	ranlib $(NAME).a

fclean:
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all
