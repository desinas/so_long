/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:42:51 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/06 15:40:37 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param s: The string from which to create the substring
 * @param start: The start index of the substring in the string ’s’
 * @param len: The maximum length of the substring.
 * Allocates (with malloc(3)) and returns a substring from the string ’s’. 
 * The substring begins at index ’start’ and is of maximum size ’len’.
 * @return The substring, NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	index;

	index = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	string = (char *)malloc(sizeof(char) * (len + 1));
	if (!string)
		return (NULL);
	while (index < len)
	{
		string[index] = s[start + index];
		index = index + 1;
	}
	string[index] = '\0';
	return (string);
}
