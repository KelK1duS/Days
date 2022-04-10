CC=gcc
CFLAGS= -Wall -Wextra -Werror 

SRCDIR=	srcs/
SRCS= $(SRCDIR)ft_putchar.c $(SRCDIR)ft_putstr.c $(SRCDIR)ft_strcmp.c $(SRCDIR)ft_strlen.c $(SRCDIR)ft_swap.c
OBJ= $(subst .c,.o,$(SRCS))

NAME= libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc libft.a $^
	ranlib $(NAME)

.c%.o:
	$(CC) $(SRCS) -c $(CFLAGS) -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all .c.o clean fclean re