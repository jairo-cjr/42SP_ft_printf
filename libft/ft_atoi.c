/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:44:50 by jcaetano          #+#    #+#             */
/*   Updated: 2021/09/13 14:02:36 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c);

int	ft_atoi(const char *nptr)
{
	int	res;
	int	signal;

	signal = 1;
	res = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == 45 || *nptr == 43)
	{
		if (*nptr == '-')
			signal *= -1;
		nptr++;
	}
	else if (*nptr == 43)
		nptr++;
	while (ft_isdigit(*nptr))
		res = (res * 10) + (*nptr++ - 48);
	return (res * signal);
}

static int	ft_isspace(char c)
{
	return ((c == '\t'
			|| c == '\v'
			|| c == '\r'
			|| c == '\n'
			|| c == '\f'
			|| c == ' '));
}
