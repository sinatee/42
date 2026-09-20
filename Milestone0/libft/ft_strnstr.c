/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomato-soup <tomato-soup@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 21:17:43 by sisupapi          #+#    #+#             */
/*   Updated: 2026/09/17 22:30:35 by tomato-soup      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	int		is_equal;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (little_len > ft_strlen(big) || len < little_len)
		return (NULL);
	while (big[i] != '\0' && i <= (len - little_len))
	{
		is_equal = ft_strncmp(&big[i], little, little_len);
		if (is_equal == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
