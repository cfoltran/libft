# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 13:28:57 by clfoltra          #+#    #+#              #
#    Updated: 2018/11/06 15:00:34 by clfoltra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 

SRC = ft_putstr.c ft_putchar.c ft_putnbr.c ft_putendl.c ft_putchar_fd.c \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd.c strlen.c ft_strdup.c \
		ft_strcpy.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc $(OBJ) -o $(NAME)

fclean:
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all
