# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 11:33:07 by jcaetano          #+#    #+#              #
#    Updated: 2021/10/26 16:48:21 by jcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

LIBFT_PATH		=	./libft
LIBFT			=	$(LIBFT_PATH)/libft.a

SRCS			= ft_printf.c \
                    ft_printf_chars.c \
                    ft_printf_nbrs.c \
                    ft_printf_hex.c
HEADER			=	ft_printf.h
OBJECTS			=	$(SRCS:.c=.o)


CC				=	clang
CFLAGS			=	-Wall -Wextra -Werror
AR				=	ar -rcs
RM				=	rm -rf

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(LIBFT) $(OBJ_DIR) $(OBJECTS) $(HEADER)
					cp	$(LIBFT) $(NAME)
					$(AR) $(NAME) $(OBJECTS)

$(LIBFT):
					$(MAKE) -C $(LIBFT_PATH)

$(OBJ_DIR):
					mkdir -p $(OBJ_DIR)

clean:
					$(MAKE) -C $(LIBFT_PATH) clean
					$(RM) $(OBJ_DIR)

fclean:				clean
					$(MAKE) -C $(LIBFT_PATH) fclean
					$(RM) $(NAME)

run: 				all clean
					$(CC) -g ./test/main.c -L. -lftprintf -o ./test/a.out \
					$(CFLAGS) -fsanitize=address

make a:
					./test/a.out
re:					fclean all

test: all clean
	$(CC) -g ./test/main.c -L. -lftprintf -o ./test/a.out $(CFLAGS) -fsanitize=address

.PHONY:				all clean fclean re libft run
