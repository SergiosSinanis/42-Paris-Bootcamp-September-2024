NAME = do-op

SOURCES = ./do_op.c ./do_op2.c ./do_op3.c

OBJECTS = $(SOURCES:.c=.o)

INCLUDES = ./do_op.h

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	@echo "Create program"
	$(CC) $(CFLAGS) -I $(INCLUDES) -o $(NAME) $(OBJECTS)

clean:
	@echo "Clean up files"
	rm -f $(OBJECTS)

fclean: clean
	@echo "Clean up previous files"
	rm -f $(NAME)

re: fclean all
	@echo "Recompile"
