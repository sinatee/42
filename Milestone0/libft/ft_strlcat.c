/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisupapi <sisupapi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 21:04:35 by tomato-soup       #+#    #+#             */
/*   Updated: 2026/09/15 18:58:01 by sisupapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	current;

	src_size = ft_strlen(src);
	current = 0;
	while (current < size && dst[current] != '\0')
		current++;
	dst_size = current;
	if (size <= dst_size)
		return (dst_size + src_size);
	current = 0;
	while (src[current] != '\0' && (dst_size + current) < (size - 1))
	{
		dst[dst_size + current] = src[current];
		current++;
	}
	dst[dst_size + current] = '\0';
	return (dst_size + src_size);
}
