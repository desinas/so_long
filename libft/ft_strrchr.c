/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:40:01 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/04 18:14:41 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * locates an ascii character in the string,
 * finds the last of the occurrence, of converted to char, c parameter,
 * if the argument giving to the c is the \0 it will find it, too
 * returns a pointer to the located character, or NULL if not found
*/
char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = ft_strlen((char *)s);
	while ((length > 0) && (*s != '\0') && (s[length] != (char)c))
	{
		length = length - 1;
	}
	if (s[length] == (char)c)
	{
		return ((char *)s + length);
	}
	return (NULL);
}
