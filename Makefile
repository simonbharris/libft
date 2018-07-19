# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sharris <sharris@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/09 18:59:28 by sharris           #+#    #+#              #
#    Updated: 2018/07/09 18:59:28 by sharris          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
OBJ = $(SRCS:%.c=%.o)
HEADER = ./libft.h

AR = ar
ARFLAGS = rcs

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

$(OBJ): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -I $(HEADER)
	
all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all 
