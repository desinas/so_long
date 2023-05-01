/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:17:23 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/11/23 17:19:33 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @param c: The character to output.
 * @param fd: The file descriptor on which to write.
 * Outputs the character ’c’ to the given file descriptor.
**/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
