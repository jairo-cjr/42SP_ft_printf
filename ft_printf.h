/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcaetano <jcaetano@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:30:31 by jcaetano          #+#    #+#             */
/*   Updated: 2021/10/26 16:21:12 by jcaetano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include "./libft/libft.h"

// # define HEXA_UP	"0123456789ABCDEF"
// # define HEXA_UP	"0123456789abcdef"
# define UINT_MAX 4294967295
# define FORMATS	"cspdiuxX%"

int				ft_printf(const char *str, ...);

/**
 * @brief Outputs the character ’c'.
 *
 * @param c The character to output.
 * @return The number of characters output.
 */
int				ft_putchar(char c);

/**
 * @brief Outputs the string ’s’.
 *
 * @param str The string to output.
 */
int				ft_putstr(char *str);

/**
 * @brief Calls the functions responsible for convert the parameter.
 *
 * @param c The parameter type to convert.
 * @param ap The parameter to be converted
 * @return The number of chars writen.
 */
int				ft_switch(char *c, va_list ap);

/**
 * @brief Outputs the integer ’n’.
 *
 * @param n The integer to output.
 * @return The number os characters writen.
 */
int				ft_putnbr(int n);

/**
 * @brief Outputs the unsigned int 'n'.
 *
 * @param n The unsigned int to output.
 * @return The number os characters writen.
 */
int				ft_unsigned(unsigned int n);

#endif
