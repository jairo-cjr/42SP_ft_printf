/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:51:56 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/21 10:53:37 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// cspdiuxX

int	main(void)
{
	int	p;

	p = 50;
	printf("%%c = %c\n", 'H');
	printf("%%s = %s\n", "Hello world");
	printf("%%p = %p\n", &p);
	printf("%%d = %d\n", 50);
	printf("%%i = %i\n", 40);
	printf("%%u = %u\n", 30);
	printf("%%u (-30) = %u\n", -30);
	printf("%%x (41) = %x\n", 41);
	printf("%%x (A) = %x\n", 'A');
	printf("%%x (101001) = %x\n", 101001);
	printf("%%X (Z) = %X\n", 'Z');
	return (0);
}
