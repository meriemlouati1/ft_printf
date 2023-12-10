CC = cc
CFLAGS = -Wall -Werror -Wextra 
AR = ar rcs
SRCS = ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_base.c ft_putnbr_address.c ft_printf.c
NAME = libftprintf.a

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $@ $?

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re

