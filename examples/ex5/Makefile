# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 11:27:50 by jcaetano          #+#    #+#              #
#    Updated: 2021/10/15 12:37:14 by jcaetano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = gcc
CFLAGS = -g -Wall -Werror -Wextra

SRCS = ./main.c

OUTPUT = ./a.out

all:
	clear
	@${CC} ${CFLAGS} ${SRCS} -fsanitize=address
	@echo "Compilacao concluida."

.PHONY: all r
