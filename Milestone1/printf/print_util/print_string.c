/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pa-duk <pa-duk@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 15:08:29 by pa-duk            #+#    #+#             */
/*   Updated: 2026/09/30 16:09:09 by pa-duk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

//return printed bytes
int print_string(char *str)
{
    int count;

    if (str == NULL)
		return (write(1, "(null)", 6));
    count = 0;
    while (str[count] != '\0')
    {
        write(1, &str[count], 1);
        count++;
    }
    return (count);
}
