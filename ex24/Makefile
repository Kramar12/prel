# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ariabyi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/26 13:02:34 by ariabyi           #+#    #+#              #
#    Updated: 2017/10/26 15:30:17 by ariabyi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = srcs/*.c

HEADER = ./includes/

OBJ = ./*.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I $(HEADER) $(SRC)
	ar rc $(NAME) $(SRC)

clean:
	/bin/rm -f *.o
	/bin/rm -f *~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
