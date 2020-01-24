# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/08 12:10:50 by ksulaima          #+#    #+#              #
#    Updated: 2020/01/19 20:39:20 by ksulaima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CFLG = -Wextra -Wall -Werror
SRCS = fillit.c error.c solve.c reader.c ft_isqrtc.c
LIB = libft/libft.a

all: $(NAME)

$(NAME):
	make -s -C libft
	gcc $(CFLG) $(SRCS) $(LIB) -o $(NAME)

clean:
	make -C libft clean

fclean:
	rm -f $(NAME)
	make -s -C libft fclean

re:	fclean $(NAME)

.PHONY: all clean fclean re