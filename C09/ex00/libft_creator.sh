# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nvictor <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/23 19:40:21 by nvictor           #+#    #+#              #
#    Updated: 2020/08/23 19:45:37 by nvictor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

gcc -c ft_putstr.c ft_strcmp.c ft_putchar.c ft_strlen.c ft_swap.c
ar rc libft.a ft_putstr.o ft_strcmp.o ft_putchar.o ft_strlen.o ft_swap.o
ranlib libft.a
