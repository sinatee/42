/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisupapi <sisupapi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 16:29:53 by sisupapi          #+#    #+#             */
/*   Updated: 2026/09/16 17:01:16 by sisupapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s) + 1;
	new_s = malloc(size);
	if (!new_s)
		return (NULL);
	ft_memcpy(new_s, s, size);
	return (new_s);
}
