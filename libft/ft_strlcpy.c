/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:35:44 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 16:50:29 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param dst: destination string as array of chars
 * @param src: string to be copied
 * @param dstsize: number of characters to be copied
 * takes the destination's size as a parameter and will not write
 * more than that size of bytes, in order to prevent buffer overflow, 
 * writes a NULL byte to the destination,
 * the resulting string is guaranteed to ne NULL-terminated even if truncated,
 * @returns the total length of the string to create the length of the source
 * 
*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;

	index = 0;
	if (dstsize > 0)
	{
		while (src[index] && index < dstsize - 1)
		{
			dst[index] = src[index];
			index++;
		}
		dst[index] = '\0';
	}
	while (src[index])
	{
		index++;
	}
	return (index);
}
