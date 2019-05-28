# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkwayiba <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/24 15:51:47 by jkwayiba          #+#    #+#              #
#    Updated: 2019/05/28 16:13:25 by jkwayiba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = src/ft_*.c

INC = includes

OUTPUT = ft_*.o

all: $(NAME)

$(NAME):
		@gcc -Wall -Wall -Werror -Wextra -c $(SRCS) -I $(INC)
		@ar rc $(NAME) $(OUTPUT)
		@ranlib $(NAME)

clean: 
	@/bin/rm -f $(OUTPUT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
