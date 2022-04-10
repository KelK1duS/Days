CC=gcc
CFLAGS= -Wall -Werror -Wextra

SRCS= ft_point.c
OBJ= $(subst .c,.o,$(SRCS))

NAME=exec

$(NAME): all

all: .c.o
	$(CC) $(OBJ) -o $(NAME)

.c.o:
	$(CC) $(SRCS) -c $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all clean

.PHONY: all .c.o clean fclean re