/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:35:30 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 17:17:21 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param dst: the memory address of the destination string
 * @param src: the memory address of the source string
 * @param len: the string size in bytes, that will be moved 
 * copies len bytes from the memory of source to destination, 
 * that overlaps eachother
 * @returns the value of dst string
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destin;
	char	*source;

	destin = (char *)dst;
	source = (char *)src;
	if (dst == src || len == 0)
		return (dst);
	if (source < destin)
	{
		while (len--)
			*(destin + len) = *(source + len);
		return (dst);
	}
	while (len--)
		*destin++ = *source++;
	return (dst);
}
