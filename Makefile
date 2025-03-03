NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_func.c ft_func2.c ft_printf.c

OBJS = $(SRCS:.c=.o)
			
all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
		
fclean:	clean
	$(RM) $(NAME)
		
re: fclean all