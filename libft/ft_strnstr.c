/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:39:50 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 16:38:01 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * @param haystack: the string to be scanned for the,
 * @param needle: small string in order to be found
 * @param len: maximum amount of characters to be searched
 * locates substring, where not more than 'len' characters are searched,
 * locates the first occurrence of the null-terminated string needle 
 * in the string haystack, where not more than len characters are searched, 
 * characters that appear after a `\0' character are not searched
 * @returns a pointer to the first character of the first occurrence 
 * of the found is returned, NULL if the substring is not found, 
 * if 'needle' is an empty string, 'haystack' is returned
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	scan;
	char	*string;

	string = (char *)haystack;
	index = 0;
	if (*needle == '\0')
	{
		return (string);
	}	
	while (haystack[index] && index < len)
	{
		scan = 0;
		while (haystack[index + scan] == needle[scan] && (index + scan) < len)
		{
			if (needle[scan + 1] == '\0')
			{
				return (&string[index]);
			}
			scan++;
		}
	index++;
	}
	return (NULL);
}
