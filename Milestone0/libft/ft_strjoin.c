/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisupapi <sisupapi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 18:39:40 by sisupapi          #+#    #+#             */
/*   Updated: 2026/09/16 20:07:17 by sisupapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s1s2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	s1s2 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1s2)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		s1s2[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s1s2[i] = *s2;
		s2++;
		i++;
	}
	s1s2[i] = '\0';
	return (s1s2);
}
