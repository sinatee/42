/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   specifier_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 14:41:23 by pa-duk            #+#    #+#             */
/*   Updated: 2026/10/01 00:19:00 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int specifier_print(char specifier, va_list arg)
{
    if (specifier == 'c')
        return (print_char(va_arg(arg, int)));
    else if (specifier == 's')
        return (print_string(va_arg(arg, char *)));
    else if (specifier == 'p')
        return (print_pointer((unsigned long)va_arg(arg, void *)));
    else if (specifier == 'd' || specifier == 'i')
        return (print_int(va_arg(arg, int)));
    else if (specifier == 'u')
		return (print_uint(va_arg(arg, unsigned int)));
    else if (specifier == 'x' || specifier == 'X')
        return (print_hex(va_arg(arg, unsigned int), specifier));
    else if (specifier == '%')
        return (print_char('%'));
    return (0);
}