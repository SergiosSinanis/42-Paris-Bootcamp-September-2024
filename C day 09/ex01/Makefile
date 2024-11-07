NAME = libft.a

SOURCESDIR = srcs

SOURCES = $(SOURCESDIR)/ft_putchar.c $(SOURCESDIR)/ft_swap.c $(SOURCESDIR)/ft_putstr.c $(SOURCESDIR)/ft_strlen.c $(SOURCESDIR)/ft_strcmp.c

OBJECTS = $(SOURCES:.c=.o)

INCLUDES = ./includes

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c -I $(INCLUDES) $< -o $@

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	@echo rm -f $(OBJECTS)

fclean: clean
	@echo rm -f $(NAME)

re: fclean all
