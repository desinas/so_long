/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:41:54 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 17:00:22 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * @param s1: the string to duplicate
 * allocates sufficient memory for a copy of the string s1, 
 * dublicating by copy every character from one to second, 
 * @returns a pointer shows to the duplicated string, 
 * NULL if insufficient memory was available
*/
char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		index;
	int		length;

	length = ft_strlen(s1);
	copy = (char *)malloc(sizeof(char) * length + 1);
	if (!copy)
	{
		return (NULL);
	}
	index = 0;
	while (s1[index])
	{
		copy[index] = s1[index];
		index = index + 1;
	}
	copy[index] = '\0';
	return (copy);
}
