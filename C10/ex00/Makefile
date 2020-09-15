# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvictor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/24 18:13:25 by nvictor           #+#    #+#              #
#    Updated: 2020/08/25 14:15:01 by nvictor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	ft_display_file
SRCS	=	ft_display_file.c
OBJS	=	${SRCS:.c=.o}
CC		=	cc
RM		=	rm -f
CFLAGS	=	-Werror -Wextra -Wall

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${OBJS}
			${CC} -o ${NAME} ${OBJS}
	
clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}
.PHONY:		all, clean, fclean
