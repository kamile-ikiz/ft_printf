/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiz <ikizkamile26@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:57:21 by kikiz             #+#    #+#             */
/*   Updated: 2024/11/30 14:41:14 by kikiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	type_definer(va_list args, char str)
{
	int	i;

	i = 0;
	if (str == 'c')
		i += ft_putchar(va_arg(args, int));
	else if (str == 'd' || str == 'i')
		i += ft_print_int(va_arg(args, int));
	else if (str == 's')
		i += ft_print_str(va_arg(args, char *));
	else if (str == 'u')
		i += ft_print_uint(va_arg(args, unsigned int));
	else if (str == 'x')
		i += ft_print_hex(va_arg(args, unsigned int), 87);
	else if (str == 'X')
		i += ft_print_hex(va_arg(args, unsigned int), 55);
	else if (str == 'p')
		i += ft_print_ptr(va_arg(args, unsigned long));
	else
		i += ft_putchar(str);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			counter += type_definer(args, *str);
		}
		else
			counter += ft_putchar(*str);
		str++;
	}
	va_end(args);
	return (counter);
}
