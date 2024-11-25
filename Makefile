# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhvidste <rhvidste@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 10:06:02 by rhvidste          #+#    #+#              #
#    Updated: 2024/11/22 13:38:42 by rhvidste         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_get_next_line_test
SRC			=	get_next_line_test.c get_next_line.c get_next_line_utils.c
CC 			= 	cc
FLAGS		=	-Werror -Wextra -Wall -I .

BS ?= 5	

$(NAME): $(SRC)
		$(CC) $(FLAGS) -D BUFFER_SIZE=$(BS) $(SRC) -o $(NAME)

all: $(NAME)

clean:
		rm -f $(NAME)

re:	clean all
