/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:35:38 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 16:56:27 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param dst: the destination array of chars
 * @param src: the string to be appended to the destination
 * @param dstsize: maximum number of characters to be appended
 * concatenates by appending the string src to the end of dst, it will concaten.
 * appends the NULL-terminated string src to the end of string dst,
 * the most size it will append at most size= strlen(dst) -1 byte,
 * the result is NULL-terninated
 * @returns the initial length of dst plus the length of src
*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	length;

	length = 0;
	while (dst[length] && length < dstsize)
	{
		length = length + 1;
	}
	index = length;
	while (src[length - index] && length + 1 < dstsize)
	{
		dst[length] = src[length - index];
		length = length + 1;
	}
	if (index < dstsize)
	{
		dst[length] = '\0';
	}
	return (index + ft_strlen(src));
}
