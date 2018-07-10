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

NAME = libft
CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
SRCS = $(wildcard ./srcs/*.c)
OBJS = *.o
HEADER = ./includes/libft.h

$(NAME): 
	$(CC) $(CFLAGS) $(SRCS)
	ar rc libft.a *.o
	ranlib libft.a

make: $(NAME)

clean:
	rm $(OBJS)

fclean:
	rm $(NAME)