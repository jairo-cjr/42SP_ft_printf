/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:15:24 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/26 16:23:06 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	main(void)
{
	ft_printf("Ol%c\n", 'a');
	ft_printf("%%\n", 'a');
	ft_printf("Ola, %s\n", "Mundo!");
	ft_printf("Eu nasci nos anos %i.\n", 2000);
	ft_printf("Eu tenho %d anos.\n", 21);
	ft_printf("ft_printf uint 1 = %u\n", 4294967295);
	ft_printf("ft_printf uint 2 = %u\n", -4294967295);
	ft_printf("ft_printf uint 3 = %u\n", 4294967296);
	ft_printf("ft_printf uint 4 = %u\n", -4294967296);
	// printf("printf uint = %u\n", 2147483648);
	// write(1, "\n", 1);
	return (0);
}
