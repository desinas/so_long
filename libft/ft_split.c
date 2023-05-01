/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:15:19 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 14:54:07 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	fill_array_word(char *dst, char const *src, int *i, char c);

static int	word_len(char const *s, char c, int start);

static int	word_counter(char const *s, char c);

static char	**ft_free(char **arrstrs, int i);

/**
 * @param s: The string to be split.
 * @param c: The delimiter character.
 * Allocates (with malloc(3)) and returns an array of strings obtained 
 * by splitting ’s’ using the character ’c’ as a delimiter.
 * @returns The array of new strings resulting from the split, NULL if fails.
*/
char	**ft_split(char const *s, char c)
{
	char	**arrstrs;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	arrstrs = (char **)malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!arrstrs)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			arrstrs[j] = (char *)malloc(sizeof(char) * (word_len(s, c, i) + 1));
			if (!arrstrs[j])
				return (ft_free(arrstrs, j));
			fill_array_word(arrstrs[j++], s, &i, c);
		}
	}
	arrstrs[j] = NULL;
	return (arrstrs);
}

static char	**ft_free(char **arrstrs, int i)
{
	while (i >= 0)
	{
		free(arrstrs[i]);
		i = i - 1;
	}
	free(arrstrs);
	return (NULL);
}

static int	word_counter(char const *s, char c)
{
	int	counter;
	int	index;

	index = 0;
	counter = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c)
			counter++;
		while (s[index] != c && s[index + 1])
		{
			index++;
		}
		index++;
	}
	return (counter);
}

static int	word_len(char const *s, char c, int start)
{
	int	len;

	len = 0;
	while (s[start + len] && s[start + len] != c)
	{
		len++;
	}
	return (len);
}

static void	fill_array_word(char *dst, char const *src, int *i, char c)
{
	int	index;

	index = 0;
	while (src[*i] && src[*i] != c)
	{
		dst[index++] = src[(*i)++];
	}
	dst[index] = '\0';
}
