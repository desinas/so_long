/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:32:14 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/08 15:41:05 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/***
 * checks for any printing character, including space
*/
int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}
