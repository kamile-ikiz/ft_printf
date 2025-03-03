/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kikiz <ikizkamile26@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:43:45 by kikiz             #+#    #+#             */
/*   Updated: 2024/11/29 19:07:05 by kikiz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_putchar(char c);
int	ft_print_int(int a);
int	ft_print_str(char *str);
int	ft_print_uint(unsigned int a);
int	ft_print_hex(unsigned int a, int b);
int	ft_print_ptr(unsigned long a);

#endif