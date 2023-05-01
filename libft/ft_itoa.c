/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:44:09 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/11/30 19:11:20 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen_base(int nbr, int base);

/**
 * @param n: the integer to be convert to a string
 * allocates (with malloc(3)) and returns a new null-termed string representing 
 * the integer received as an argument, negative numbers must be handled
 * @return the string representing the integer, NULL if the allocation fails
**/
char	*ft_itoa(int n)
{
	size_t	index;
	size_t	n_size;
	char	*string;

	index = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	n_size = ft_nbrlen_base(n, 10);
	string = (char *)malloc(sizeof(char) * (n_size + 1));
	if (!string)
		return (NULL);
	string[n_size] = 0;
	if (n < 0)
	{
		string[0] = '-';
		n = n * -1;
		index++;
	}
	while (index < n_size--)
	{
		string[n_size] = (n % 10) + '0';
		n = n / 10;
	}
	return (string);
}

/***
 * helper function: computes number length according to the base of the number
*/
static size_t	ft_nbrlen_base(int nbr, int base)
{
	size_t	length;

	length = 0;
	if (nbr == 0)
		return (1);
	if (nbr < 0 && base == 10)
		length++;
	while (nbr != 0)
	{
		nbr /= base;
		length++;
	}
	return (length);
}
