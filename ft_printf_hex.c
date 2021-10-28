/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:47:39 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/28 12:32:47 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(int n, int is_low);

int	ft_hex_digit(unsigned int n, int is_low)
{
	size_t	size;

	size = 0;
	if ((n < 0) && (n * -1 <= UINT_MAX))
		n = (n * -1) - 1;
	if (n >= 16)
		size += ft_hex_digit(n / 16, is_low);
	size += ft_puthex(n % 16, is_low);
	return (size);
}

int	ft_putptr(unsigned long int nbr, int first)
{
	size_t	size;

	size = 0;
	if (!nbr)
		size += (write(1, "(nil)", 5));
	else
	{
		if (first)
			size += write(1, "0x", 2);
		if (nbr >= 16)
			size += ft_putptr(nbr / 16, 0);
		size += ft_puthex(nbr % 16, 1);
	}
	return (size);
}

int	ft_puthex(int n, int is_low)
{
	if (is_low)
		return (ft_putchar(HEXA_LOW[n]));
	else
		return (ft_putchar(HEXA_UP[n]));
	return (0);
}
