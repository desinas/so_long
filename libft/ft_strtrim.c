/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:15:43 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/11/30 13:51:32 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_search(char chr, const char *set);

/***
 * @param s1: The string to be trimmed.
 * @param set: The reference set of characters to trim.
 * Allocates (with malloc(3)) and returns a copy of ’s1’ given as argument
 * with the characters specified in ’set’ removed from the beginning 
 * and the end of the string.
 * @returns The trimmed string, NULL if the allocation fails.
**/
char	*ft_strtrim(char const *s1, char const *set)
{
	int		index;
	int		start;
	int		finish;
	char	*trimmed;

	if (!s1)
		return (NULL);
	index = 0;
	start = 0;
	trimmed = NULL;
	finish = ft_strlen(s1);
	while (*s1 && ft_search(s1[start], set) == 1)
		start = start + 1;
	while (finish > start && ft_search(s1[finish - 1], set))
		finish = finish - 1;
	trimmed = (char *)malloc((finish - start + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	while (finish > start)
	{
		trimmed[index++] = s1[start++];
	}
	trimmed[index] = '\0';
	return (trimmed);
}

static int	ft_search(char chr, const char *set)
{
	while (*set)
	{
		if (chr == *set)
		{
			return (1);
		}
		set++;
	}
	return (0);
}
