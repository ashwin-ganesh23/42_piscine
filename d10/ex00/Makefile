# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aganesh <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/25 15:11:44 by aganesh           #+#    #+#              #
#    Updated: 2016/07/25 15:11:45 by aganesh          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
GCC_FLAGS = gcc -c -Wall -Wextra -Werror
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
HEADER_DIR = -I includes/*.h

all: makelib

makelib:
	$(GCC) $(NAME) $(HEADER_DIR) $(SRC) 
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_swap.o ft_strlen.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all