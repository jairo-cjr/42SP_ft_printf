/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:51:56 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/15 12:58:00 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>

/*
	- Sempre coloque os argumentos requeridos primeiro;
	- Os outros argumentos não possuem nomes.
	Para isso são utilizados 3 macros principais:
		- va_start, va_arg, va_end;

	- va_start
		- Dois argumentos: o va_list e o nome do ultimo argumento requerido;
		- Está setando um ponteiro para um lugar na call stack onde os
		argumentos variados foram armazenados quando a função foi chamada;
	- va_list
		- Utilizado para variáveis de ponteiro de argumento;
	- va_args
		- Serve parar extrair os argumentos um a um;
	- va_end
		- Encerrar os argumentos variados;
*/
void	print_ints(int num, ...)
{
	va_list	args;
	int		i;
	int		value;

	i = 0;
	printf("num = %d\n", num);
	va_start(args, num);
	while (i < num)
	{
		value = va_arg(args, int);
		printf("%d: %d\n", i, value);
		i++;
	}
	printf("-----\n");
	va_end(args);
}

int	main(void)
{
	print_ints(0);
	print_ints(3, 10, 8, 21);
	print_ints(5, 42, 26, 21);
	print_ints(3, 47, 15, 36, 85);
	return (1);
}
