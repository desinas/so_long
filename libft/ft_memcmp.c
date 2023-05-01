/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:39:02 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 17:24:24 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param s1: memory address of the memory area
 * @param s2: memory address of the memory area
 * @param n: the size of the memory area
 * compares byte string s1 against byte string s2, both strings n bytes long
 * @returns zero if the two strings are identical, otherwise, returns 
 * the difference between the first two differing bytes, as unsigned char values
 * zero-length strings are always identical
 * @result is < 0 if s1 is less than s2, is > 0 if s1 is graeter than s2, 
 * and is = 0 if s1 is equal to s2
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*area1;
	const unsigned char	*area2;
	int					result;

	result = 0;
	while (n > 0)
	{
		area1 = (const unsigned char *)s1;
		area2 = (const unsigned char *)s2;
		result = *area1 - *area2;
		if (result != 0)
		{
			break ;
		}
		s1++;
		s2++;
		n--;
	}
	return (result);
}
