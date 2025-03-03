/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiz <ikizkamile26@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:10:52 by kikiz             #+#    #+#             */
/*   Updated: 2024/11/29 19:47:23 by kikiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int a)
{
	int	i;

	i = 0;
	if (a <= 9)
		i += ft_putchar(a + '0');
	else
	{
		i += ft_print_uint(a / 10);
		i += ft_print_uint(a % 10);
	}
	return (i);
}

int	ft_print_hex(unsigned int a, int b)
{
	int	i;

	i = 0;
	if (a >= 16)
		i += ft_print_hex(a / 16, b);
	if ((a % 16) < 10)
		i += ft_putchar((a % 16) + '0');
	else
		i += ft_putchar((a % 16) + b);
	return (i);
}

int	ft_print_ptr(unsigned long a)
{
	int	i;

	i = 0;
	if (a == (unsigned long) NULL)
	{
		i += ft_print_str(("(nil)"));
		return (5);
	}
	if (a >= 16)
		i += ft_print_ptr(a / 16);
	else
		i += ft_print_str("0x");
	if ((a % 16) < 10)
		i += ft_putchar((a % 16) + '0');
	else
		i += ft_putchar((a % 16) + 87);
	return (i);
}
