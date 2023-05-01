/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:56:11 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/01 10:00:10 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	string_length(const char *s);

/**
 * @param s: The string on which to iterate.
 * @param f: The function to apply to each character.
 * applies the passed function to each character of the passed string, 
 * and passing its index as first argument to create a new string
 * @returns the string created from the successive applications of ’f’, 
 * or returns NULL if the allocation fails.
**/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*string;
	unsigned int	index;

	string = (char *)malloc(sizeof(char) * string_length(s) + 1);
	if (!string)
		return (NULL);
	index = 0;
	while (s[index] != '\0')
	{
		string[index] = f(index, s[index]);
		index = index + 1;
	}
	string[index] = '\0';
	return (string);
}

/***
 * finds the length of the string s
*/
static size_t	string_length(const char *s)
{
	unsigned long	length;

	length = 0;
	while (s[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}
