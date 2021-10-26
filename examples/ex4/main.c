/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:51:56 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/20 10:21:18 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int		ft_printf(const char *str);
void	ft_check_var(char c);

int	main(void)
{
	ft_printf("LOREM iPSUM. %c");
	ft_printf("Tenho 20. %d");
	return (1);
}

int	ft_printf(const char *str)
{
	// va_list		args;
	int			i;
	// const char	*str;

	// va_start(args, str);
	// str = va_arg(args, const char *);
	if (!str)
		return (0);
	i = 0;
	printf("-----\n");
	while (str[i])
	{
		if (str[i] == 37)
			ft_check_var(str[++i]);
		else
			write(1, (void *)&str[i], 1);
		i++;
	}
	printf("\n-----\n");
	return (0);
}

void	ft_check_var(char c)
{
	if (c == 'c')
		write(1, "char", 4);
	else if (c == 'd')
		write(1, "int", 3);
}
