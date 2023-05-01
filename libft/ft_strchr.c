/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:39:26 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 17:05:33 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * @param s: a pointer to string
 * @param c: character to be located
 * locates the first occurrence of char in the string pointed to by s,
 * finds the first of the occurrence, of converted to char, c parameter,
 * if the argument giving to the c is the \0 it will find it, too
 * @returns a pointer to the located character, or NULL if not found
*/
char	*ft_strchr(const char *s, int c)
{
	int		index;
	char	*string;

	index = 0;
	string = (char *)s;
	while (string[index] && string[index] != (char)c)
	{
		index++;
	}
	if (string[index] == (char)c)
	{
		return ((char *)string + index);
	}
	return (NULL);
}
