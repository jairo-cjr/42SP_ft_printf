/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:15:24 by jcaetano          #+#    #+#             */
/*   Updated: 2021/11/01 16:47:21 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	nbr;

	nbr = -256;
	printf("value: %d\n", nbr);
	a = ft_printf("%p", (void *)-256);
	printf("\n%d\n", a);
	b = printf("%p", (void *)-256);
	printf("\n%d\n", b);
	return (0);
}
