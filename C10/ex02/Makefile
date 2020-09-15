# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvictor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 18:13:25 by nvictor           #+#    #+#              #
#    Updated: 2020/08/25 23:00:32 by nvictor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_tail
SRCS	=	./ft_putchar.c ./ft_tail.c ./funkerror.c ./ft_atoi.c
OBJS	=	${SRCS:.c=.o}
CC		=	cc
RM		=	rm -f
CFLAGS	=	-Werror -Wextra -Wall

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ./ft_head.h

all:		${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}
	
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
.PHONY:		all, clean, fclean
