SRCS = ft_printf.c \
 	ft_flags_manager.c \
	ft_printf_c.c \
	ft_printf_s.c \
	ft_printf_di.c \
	ft_printf_p.c \
	ft_printf_u.c \
	ft_printf_x.c \
	ft_printf_X.c \
	ft_printf_utils.c \

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

all: $(NAME)
			
$(NAME): $(OBJS)
	ar rcs  $(NAME) $(OBJS)
	
clean: 
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY = all clean fclean re