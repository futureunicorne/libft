# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 09:17:24 by hel-hadi          #+#    #+#              #
#    Updated: 2016/11/08 18:55:43 by hel-hadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PREF = ./srcs/
HEADER = ./includes/
SRCS = *.c
SRCTEST = test_libft_partie_1.c libft.a && ./a.out
OBJ = *.o
CC = gcc
OPTION = -c
FLAGS  = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
				$(CC) $(FLAGS) $(OPTION) $(SRCS)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

test 	:
		$(CC) $(SRCTEST)
clean	:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
