# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: neprocur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/12 03:03:41 by neprocur          #+#    #+#              #
#    Updated: 2016/11/12 23:15:32 by neprocur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CFLAG = -c -Wall -Werror -Wextra
SRC = display_file.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
			@$(CC) $(CFLAG) $(SRC)
			@$(CC) $(OBJ) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
