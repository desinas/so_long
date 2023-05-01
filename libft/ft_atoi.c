/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:38:37 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/10 17:38:00 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * @param str: the string to be converted to int
 * ASCII string to integer convertion, converts the initial portion of 
 * the string pointed to by str to int representation
 * @returns the converted value
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	conver;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
	{
		str = str + 1;
	}
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = (result * 10 + *str - '0');
		str = str + 1;
	}
	conver = result * sign;
	return (conver);
}
