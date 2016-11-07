# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hel-hadi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/06 09:17:24 by hel-hadi          #+#    #+#              #
#    Updated: 2016/11/06 09:17:27 by hel-hadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
PREF = ./srcs/
HEADER = ./includes/
SRCS = *.c
OBJ = *.o
CC = gcc
OPTION = -c
FLAGS  = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
				$(CC) $(FLAGS) $(OPTION) $(SRCS)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

clean	:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
