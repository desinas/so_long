/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:38:49 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 16:08:48 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param s: pointer to the address of memory to start searching
 * @param c: the number of ascii char to search for
 * @param n: the size of memory area to perform scanning
 * locates the first occurrence of c (converted to an unsigned char) in string s
 * @returns a pointer to the address of memory where the char found,
 * or NULL if no such char exists within n bytes
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			index;
	unsigned char	*string;

	index = 0;
	string = ((unsigned char *)s);
	while (index < n)
	{
		if (string[index] == (unsigned char)c)
		{
			return (string + index);
		}
		index++;
	}
	return (0);
}
