/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 22:13:08 by pa-duk            #+#    #+#             */
/*   Updated: 2026/09/30 15:15:04 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int find_char(char c, const char *str);

// return 1 on good format
// return -1 when wrong format
int format_check(const char *format)
{
    int i;
    
    if (format == NULL)
        return (-1);
    i = 0;
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if (format[i] == '\0')
                return (-1);
            if (find_char(format[i], SPECIFIERS) == -1)
                return (-1);
        }
        i++;
    }
    return (1);
}

// return 1 c is found
// return -1 c is not found
static int find_char(char c, const char *str)
{
    while (*str != '\0')
    {
        if (c == *str)
            return (1);
        str++;
    }
    return (-1);
}
