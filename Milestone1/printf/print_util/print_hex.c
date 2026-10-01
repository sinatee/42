/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 23:18:33 by pa-duk            #+#    #+#             */
/*   Updated: 2026/10/01 13:43:22 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int print_hex(unsigned int uint, char format)
{
    int             count;
    unsigned int    divider;
    char            *base;

    if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
    if (uint == 0)
		return (write(1, "0", 1));
    divider = 1;
    while (uint / divider >= 16)
        divider *= 16;
    count = 0;
    while (divider > 0)
    {
        count += write(1, &(base[uint / divider]), 1);
        uint %= divider;
		divider /= 16;
    }
    return (count);
}