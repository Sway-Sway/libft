NAME = libft.a

SRCS = src/ft_*.c

INC = includes

Output = ft_*.o

all = $(NAME)

$(NAME) :
		@gcc -Wall -Wall -Werror -Wextra -c $(SRCS) -I $(INC)
		@ar rc $(NAME) $(OUTPUT)
		@ranlib $(NAME)

clean : 
		@/bin/rm -f $(OUTPUT)

fclean : clean
		@/bin/rm -f $(NAME)

re : fclean all