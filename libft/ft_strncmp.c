/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:39:42 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/04 18:29:25 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * compare left string to right string up to a number, 
 * it returns a value greater than zero when the matching character 
 * of left string has greater ASCII value than the character of the right string
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[index] == s2[index] && s1[index] && index < n - 1)
	{
		index = index + 1;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
