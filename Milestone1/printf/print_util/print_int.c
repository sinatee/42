/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:18:18 by pa-duk            #+#    #+#             */
/*   Updated: 2026/09/30 18:01:24 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//return printed bytes
int print_int(int integer)
{   
    int count;
    int divider;
    char c;
    
    if (integer == -2147483648)
		return (write(1, "-2147483648", 11));
    if (integer == 0)
		return (write(1, "0", 1));
    count = 0;
    if (integer < 0)
    {
        count += write(1, "-", 1);
        integer = -integer;
    }
    divider = 1;
    while (integer / divider >= 10)
        divider *= 10;
    while (divider > 0)
    {
        c = (integer / divider) + '0';
        count += write(1, &c, 1);
        integer %= divider;
        divider /= 10;
    }
    return (count);
}