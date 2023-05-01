/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:21:54 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/06 16:26:32 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a new string, 
 * which is the result of the concatenation of ’s1’ and ’s2’
 * @param s1, the prefix string
 * @param s2, the suffix string
 * concat is the variable where the two stringsare joined, and
 * it is initialized NULL for the case of a memory allocation fail
 * @return the new string, NULL if the allocation fails
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		index2;
	int		index1;

	if (!s1 || !s2)
		return (NULL);
	concat = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!concat)
		return (NULL);
	index1 = 0;
	while (s1[index1])
	{
		concat[index1] = s1[index1];
		index1++;
	}
	index2 = 0;
	while (s2[index2])
	{
		concat[index1 + index2] = s2[index2];
		index2++;
	}
	concat[index1 + index2] = '\0';
	return (concat);
}
