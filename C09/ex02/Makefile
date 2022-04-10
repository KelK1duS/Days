CC=gcc
CFLAGS= -Wall -Wextra -Werror 

SRCS= ft_split.c
OBJ= $(subst .c,.o,$(SRCS))

NAME=exec

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

.c.o: $(SRCS)
	$(CC) $^ -c $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

run: all
	./$(NAME)

.PHONY: all $(NAME) .c.o clean fclean re run