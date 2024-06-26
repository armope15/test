NAME      = libftprintf.a
CC        = cc
AR        = ar
CFLAGS    = -Wall -Wextra -Werror
ARFLAGS   = -rcs

SOURCES   = ft_printf.c ft_printf_util.c utils.c 

OBJECTS = $(SOURCES:.c=.o) 

$(NAME): $(OBJECTS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)
all: ${NAME}

re: fclean all

.PHONY: all clean fclean re