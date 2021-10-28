/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:51:56 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/27 10:04:08 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <unistd.h>
#include <stdio.h>

/* you must provide this function somewhere */
void	write_char(char c)
{
	write(1, &c, 1);
}

char	hex_digit(int v)
{
	if (v >= 0 && v < 10)
		return ('0' + v);
	else
		return ('a' + v - 10);
}

void	print_address_hex(void *p0)
{
	int			i;
	uintptr_t	p;

	p = (uintptr_t)p0;
	write_char('0');
	write_char('x');
	i = (sizeof(p) << 3) - 4;
	while (i >= 0)
	{
		write_char(hex_digit((p >> i) & 0xf));
		i -= 4;
	}
	write_char('\n');
}

int	main(void)
{
	int	p;

	p = 50;
	print_address_hex(&p);
	printf("printf: %p\n", &p);
}
