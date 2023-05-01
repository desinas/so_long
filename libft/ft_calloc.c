/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:42:05 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 17:31:52 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * @param count: number of elements to be allocated
 * @param size: size of elements to be allocated
 * allocates enough space memory, count objects that are size bytes 
 * of memory each and returns a pointer to the allocation, 
 * the allocated memory is aligned such that it can be used for any data type, 
 * the allocated memory is filled with bytes of value zero, if run successfuly, 
 * @returns a pointer to allocated memory.
*/
void	*ft_calloc(size_t count, size_t size)
{
	void	*pointer;
	size_t	total;

	total = count * size;
	if (size && (total / size) != count)
		return (NULL);
	pointer = malloc(total);
	if (pointer == NULL)
		return (NULL);
	ft_bzero(pointer, total);
	return (pointer);
}
