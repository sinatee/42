/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sisupapi <sisupapi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/16 21:15:23 by sisupapi          #+#    #+#             */
/*   Updated: 2026/09/16 22:12:38 by sisupapi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c);
static char		*get_word(char const *s, char c, size_t *i);
static void		free_words(char **arr, size_t count);

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	result_index;
	size_t	s_index;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	result = malloc((words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	result_index = 0;
	s_index = 0;
	while (result_index < words)
	{
		result[result_index] = get_word(s, c, &s_index);
		if (result[result_index] == NULL)
		{
			free_words(result, result_index);
			return (NULL);
		}
		result_index++;
	}
	result[result_index] = NULL;
	return (result);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s != '\0' && *s != c)
		{
			count++;
			while (*s != '\0' && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*get_word(char const *s, char c, size_t *i)
{
	size_t	start;
	size_t	len;
	char	*word;

	while (s[*i] == c)
		(*i)++;
	start = *i;
	len = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		len++;
		(*i)++;
	}
	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, s + start, len);
	word[len] = '\0';
	return (word);
}

static void	free_words(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
