/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:51:56 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/26 16:04:22 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
* cspdiuxX%
* ---------
* %c = H
* %s = Hello world
* %p = 0xfff000bcc
* %d = 50
* %i = 40
* %u = 30
* %u (-30) = 4294967266
* %x (41) = 29
* %x (A) = 41 | A = 41, então funciona.
* %x (ABCDEF) = Erro | Precisa ser um int.
* %x (101001) = 18a89
* %X (Z) = 5A
*/

int	ft_switch(char *c, va_list ap);

int	ft_printf(const char *format, ...)
{
	char			*str;
	unsigned int	count;
	va_list			ap;

	va_start(ap, format);
	if (!format)
		va_end(ap);
	str = (char *)format;
	count = 0;
	while (*str)
	{
		while (*str != '%' && *str)
		{
			count += ft_putchar(*str);
			str++;
		}
		if (!*str)
			break ;
		str++;
		count += ft_switch(str, ap);
		str ++;
	}
	va_end(ap);
	return (0);
}

int	ft_switch(char *c, va_list ap)
//cspdiuxX
{
	if (*c == '%')
		return (ft_putchar('%'));
	if (*c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (*c == 's')
		return (ft_putstr(va_arg(ap, char *)));
	// if (c == 'p')
		// return (ft_putptr(ap));
	if (*c == 'd' || *c == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	if (*c == 'u')
		return (ft_unsigned(va_arg(ap, unsigned int)));
	// if (c == 'x')
	// if (c == 'X')
	return (0);
}
