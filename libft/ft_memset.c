/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:32:24 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 17:13:25 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param b: points at the string on which the memory operation occurs 
 * @param c: the value of c converted to an unsigned char
 * @param len: the size of memory in bytes 
 * fills a memory area with a char value
 * @returns a pointer to the memory area
*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	index;

	index = 0;
	while (index < len)
	{
		((unsigned char *)b)[index] = (unsigned char)c;
		index = index + 1;
	}
	return (b);
}
