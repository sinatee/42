/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:45:07 by pa-duk            #+#    #+#             */
/*   Updated: 2026/10/01 01:15:48 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define SPECIFIERS "cspdiuxX%"

#include <stdarg.h>
#include <unistd.h>

int ft_printf(const char *format, ...);
int format_check(const char *format);
int specifier_print(char specifier, va_list arg);
int print_char(char c);
int print_string(char *str);
int print_int(int integer);
int print_pointer(unsigned long pointer);
int print_uint(unsigned int uint);
int print_hex(unsigned int uint, char format);

#endif