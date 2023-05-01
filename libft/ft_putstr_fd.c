/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:30:06 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/11/23 17:44:58 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param s: The string to output.
 * @param fd: The file descriptor on which to write.
 * Outputs the string ’s’ to the given file descriptor.
**/
void	ft_putstr_fd(char *s, int fd)
{
	int	index;

	if (!s)
		return ;
	index = 0;
	while (s[index])
	{
		ft_putchar_fd(s[index], fd);
		index = index + 1;
	}
}
