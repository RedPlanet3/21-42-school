# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvictor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/23 19:51:36 by nvictor           #+#    #+#              #
#    Updated: 2020/08/23 20:54:16 by nvictor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
OBJS = ${SRCS:.c=.o}
SRCS = ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_putchar.c ./srcs/ft_strlen.c ./srcs/ft_swap.c
CFLAGS = -Wall -Wextra -Werror
INCLUD = /includes/ft.h
.c.o:
	gcc -c ${CFLAGS} $< -o ${<:.c=.o} -I ${INCLUD}

${NAME}: 	${OBJS}
					ar rc ${NAME} ${OBJS}
all:		${NAME}


clean:				rm -f *.o

fclean:		clean
					rm -f ${NAME}

re:					fclean all

.PHONY: 	all clean fclean re libft.a
