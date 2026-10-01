/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 18:55:03 by pa-duk            #+#    #+#             */
/*   Updated: 2026/09/30 21:23:44 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// return printed bytes
int print_pointer(unsigned long pointer)
{
    int             count;
    unsigned long	divider;
    
    if (pointer == 0)
		return (write(1, "(nil)", 5));
    count = write(1, "0x", 2);
    divider = 1;
    while (pointer / divider >= 16)
		divider *= 16;
    while (divider > 0)
    {
        write(1, &("0123456789abcdef"[pointer / divider]), 1);
        count++;
        pointer %= divider;
		divider /= 16;
    }
    return (count);
}
