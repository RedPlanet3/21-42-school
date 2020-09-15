NAME = BSQ

SRCS = bsq.c ft_diffuncs.c ft_diffuncs2.c ft_print_square.c ft_read_str.c ft_read_str_one.c ft_read_str_zero.c

CFLAGS = -Wall -Werror -Wextra

HEADER = ft_head_bsq.h

OBJS = $(SRCS:.c=.o)

CC = cc

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFALGS) -o $(NAME) $(OBJS) -I $(HEADER)

all: $(NAME)

clean:
	rm  -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean
