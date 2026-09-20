/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisupapi <sisupapi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 22:19:00 by sisupapi          #+#    #+#             */
/*   Updated: 2026/09/17 14:14:33 by sisupapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long nb);

char	*ft_itoa(int n)
{
	int		is_negative;
	long	long_n;
	int		len;
	char	*str;

	long_n = n;
	is_negative = (n < 0);
	if (is_negative)
		long_n = -long_n;
	len = count_digits(long_n) + is_negative;
	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (long_n >= 10)
	{
		str[--len] = (long_n % 10) + '0';
		long_n /= 10;
	}
	str[--len] = (long_n % 10) + '0';
	if (is_negative)
		str[--len] = '-';
	return (str);
}

static int	count_digits(long nb)
{
	int	count;

	count = 1;
	while (nb >= 10)
	{
		nb /= 10;
		count++;
	}
	return (count);
}
