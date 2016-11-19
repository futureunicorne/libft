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
HEADER = ./include/
SRCS = *.c
OBJ = $(SRC:.c=.o)
OBJ1 = /objets
CC = gcc
OPT1 = -c
OPT2 = -o

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) $(OPT1) $(SRCS) 
		@mkdir objets
		@mv *.o objets
		ar rc $(NAME) $(OBJ)
		@echo "\033[34m === Creation de votre librairie ===\033[0m"
		

.PHONY: clean fclean re

clean	:
	rm -rf objets
	@echo "\033[31m === Suppression des fichiers objets===\033[0m"

fclean: clean
	rm -f $(NAME)
	@echo "\033[31m === Suppression du fichier executable===\033[0m"


re: fclean all
	 @echo "\033[35m === Renouvellement Librairie ====\033[0m"
