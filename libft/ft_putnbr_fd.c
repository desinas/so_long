/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:24:34 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/06 19:14:40 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * @param n: The integer to output.
 * @param fd: The file descriptor on which to write.
 * Outputs the integer ’n’ to the given file descriptor.
**/
void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (number < 0)
	{
		ft_putchar_fd('-', fd);
		number = number * (-1);
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	if (number >= 0 && number <= 9)
	{
		ft_putchar_fd(number + '0', fd);
	}
}
