/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 21:23:58 by pa-duk            #+#    #+#             */
/*   Updated: 2026/10/01 13:59:23 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// return printed bytes
int print_uint(unsigned int uint)
{
    int count;
    unsigned int divider;
    char c;

    if (uint == 0)
		return (write(1, "0", 1));
    divider = 1;
    while (uint / divider >= 10)
        divider *= 10; 
    count = 0;
    while (divider > 0)
    {
        c = (uint / divider) + '0';
        count += write(1, &c, 1);
        uint %= divider;
        divider /= 10;
    }
    return (count);
}