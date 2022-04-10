CC=gcc
CFLAGS= -Wall -Werror -Wextra

SRCS= ft_boolean.c
OBJ= $(subst .c,.o,$(SRCS))

NAME= exec

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

.c.o:
	$(CC) $(SRCS) -c $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all clean

.PHONY: all .c.o clean fclean re