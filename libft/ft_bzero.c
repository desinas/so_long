/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:35:03 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/11/30 18:30:54 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * fill a region of memory with null bytes 
 * @param s: pointer to the start of the area
 * @param n: the size of the area to be filled
 * The bzero() function writes n zeroed bytes to the string s. If n is zero, 
 * bzero() does nothing.
*/
void	ft_bzero(void *s, size_t n)
{
	size_t	index;

	index = 0;
	while (n > index)
	{
		((unsigned char *)s)[index] = (unsigned char)0;
		index = index + 1;
	}
}
