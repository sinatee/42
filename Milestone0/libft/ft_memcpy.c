/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisupapi <sisupapi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/30 16:03:34 by sisupapi          #+#    #+#             */
/*   Updated: 2026/09/15 18:47:31 by sisupapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*new_dest;
	const unsigned char	*new_src;

	if (!dest && !src)
	{
		return (NULL);
	}
	new_dest = (unsigned char *) dest;
	new_src = (const unsigned char *) src;
	while (n--)
	{
		*new_dest = *new_src;
		new_dest++;
		new_src++;
	}
	return (dest);
}
