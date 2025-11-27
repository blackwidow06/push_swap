NAME = push_swap

SRC = stack_utils.c \
		swap.c \
		push.c \
		rotate.c \
		reverse.c \
		parsing.c \


OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all