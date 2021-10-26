# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 11:27:50 by jcaetano          #+#    #+#              #
#    Updated: 2021/10/15 13:43:00 by jcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_printf.a
SRCS = main.c

CC = gcc
CFLAGS = -g -Wall -Werror -Wextra
RM = rm -f
OBJ = $(SRCS:.c=.o)

all: fclean
	@${CC} ${CFLAGS} ${SRCS}

$(OBJ): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

$(NAME): $(OBJ)
	ar - rcs $(NAME) $(OBJ)

clean:
	@$(RM) *.out *.o

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
