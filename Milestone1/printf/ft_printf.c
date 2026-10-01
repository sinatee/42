/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:16:03 by pa-duk            #+#    #+#             */
/*   Updated: 2026/10/01 01:05:01 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    va_list arg;
    int     printed;
    
    if ((format == NULL) || (format_check(format) == -1))
        return (-1);
    va_start(arg, format);
    printed = 0;
    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;
            if (*format != '\0')
                printed += specifier_print(*format, arg);
        }
        else
            printed += write(1, format, 1);
        format++;
    }
    va_end(arg);
    return (printed);
}
