/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:15:24 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/28 12:35:14 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include <stdlib.h>

int	main(void)
{
	int	a;
	int	b;
	int	*x;

	x = NULL;
	a = ft_printf(" %p %p ", &x, &x);
	printf("\n%d\n", a);
	b = printf(" %p %p ", &x, &x);
	printf("\n%d\n", b);
	return (0);
}
