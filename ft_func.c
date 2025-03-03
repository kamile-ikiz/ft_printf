/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiz <ikizkamile26@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 15:16:45 by kikiz             #+#    #+#             */
/*   Updated: 2024/11/30 14:30:18 by kikiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_int(int a)
{
	int	i;

	i = 0;
	if (a >= 0 && a <= 9)
	{
		i += ft_putchar(a + '0');
	}
	else if (a == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	else if (a < 0)
	{
		i += ft_putchar('-');
		i += ft_print_int(a * (-1));
	}
	else
	{
		i += ft_print_int(a / 10);
		i += ft_print_int(a % 10);
	}
	return (i);
}
