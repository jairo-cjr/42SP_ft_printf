/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 13:00:27 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/15 13:40:58 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "ft_printf.h"

/*
	- vfprintf
		Pega um fluxo como standart output de um arquivo, formata uma string e,
		em seguida, uma va_list
*/
int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		done;

	va_start(args, format);
	done = vfprintf(stdout, format, args);
	va_end(args);
	return (done);
}

int	main(void)
{
	ft_printf("Hello world.\n");
	ft_printf("This is my printf working\n");
}
