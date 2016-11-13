# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-hadi <hel-hadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 09:17:24 by hel-hadi          #+#    #+#              #
#    Updated: 2016/11/13 10:35:59 by hel-hadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PREF = ./srcs/
HEADER = ./includes/
SRCS = *.c
SRCTEST = test_libft_partie_1.c libft.a && ./a.out
SRCTEST2 = test_libft_partie_2.c libft.a && ./a.out
OBJ = *.o
CC = gcc
OPTION = -c
FLAGS  = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
				$(CC) $(FLAGS) $(OPTION) $(SRCS)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

f 	:
				$(CC) $(SRCTEST)

g		:
				$(CC) $(SRCTEST2)
clean	:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
