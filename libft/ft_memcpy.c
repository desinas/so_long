/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:35:24 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 17:19:08 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param dst: the memory address of the destination string
 * @param src: the memory address of the source string
 * @param len: the string size in bytes, that will be moved
 * copies n bytes from memory area src to memory area dst, stopping when 
 * the character c is found, or after n characters are copied, 
 * whichever comes first, if copying takes place between objects that overlap, 
 * the behavior is undefined
 * @returns the value of dst string
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	index;

	if (!dst && !src)
		return (NULL);
	index = 0;
	while (index < n)
	{
		((char *)dst)[index] = ((char *)src)[index];
		index = index + 1;
	}
	return (dst);
}
