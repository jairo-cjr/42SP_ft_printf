/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:51:56 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/20 10:03:32 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

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
void	ft_print_upper_case(int num, ...)
{
	va_list		args;
	int			i;
	int			j;
	const char	*str;

	i = -1;
	printf("num = %d\n", num);
	va_start(args, num);
	while (++i < num)
	{
		j = -1;
		str = va_arg(args, const char *);
		while (str[++j])
		{
			if ((str[j] >= 65 && str[j] <= 90))
				write (1, (void *)&str[j], 1);
			//Passe um ponteiro para a posição do dado, não o seu valor em si.
			if (str[j] >= 32 && str[j] <= 47)
				write (1, (void *)&str[j], 1);
		}
		write(1, "\n", 1);
	}
	printf("-----\n");
	va_end(args);
}

int	main(void)
{
	ft_print_upper_case(1, "OLA MUNDO.");
	ft_print_upper_case(2, "Meu nOme e JaIro.", "TeNHO 20 aNos.");
	ft_print_upper_case(1, "lOREM iPSUM", "dOloR SIT amET.");
	ft_print_upper_case(3, "lOREM iPSUM.");
	return (1);
}
