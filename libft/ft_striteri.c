/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:08:21 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/11/23 17:04:21 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param s: The string on which to iterate.
 * @param f: The function to apply to each character.
 * Applies the function ’f’ on each character of the string passed as argument, 
 * passing its index as first argument. Each character is passed by address 
 * to ’f’ to be modified if necessary.
**/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	index;

	if (!s || !f)
		return ;
	index = 0;
	while (s[index] != '\0')
	{
		f(index, s + index);
		index = index + 1;
	}
}
