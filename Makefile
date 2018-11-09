# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clfoltra <clfoltra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 13:28:57 by clfoltra          #+#    #+#              #
#    Updated: 2018/11/09 17:43:28 by clfoltra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

SRC = ft_putstr.c ft_putchar.c ft_putnbr.c ft_putendl.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strlen.c ft_strdup.c \
		ft_strcpy.c ft_strncpy.c ft_strcmp.c ft_atoi.c ft_isalpha.c \
		ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		ft_isalnum.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_strchr.c ft_memalloc.c ft_memdel.c ft_strnew.c \
		ft_strdel.c ft_strclr.c ft_striter.c ft_strmap.c ft_strmapi.c \
		ft_strequ.c ft_strnequ.c ft_bzero.c ft_strcat.c ft_strsub.c \
		ft_strjoin.c ft_strtrim.c ft_strstr.c ft_strstr.c ft_memcmp.c \
		ft_strsplit.c ft_strnstr.c ft_lstdelone.c ft_lstadd.c ft_lstiter.c \
		ft_lstnew.c ft_strtrim.c ft_memchr.c ft_memmove.c ft_strrchr.c \
		ft_strncmp.c ft_strlcat.c ft_strnlen.c \


OBJ = $(SRC:.c=.o)

all: $(NAME)
$(NAME): $(OBJ)
	ar rc $(NAME).a $(OBJ)
	ranlib $(NAME).a

fclean:
	rm -f $(NAME)

clean:
	rm -f $(OBJ)

re: fclean all
