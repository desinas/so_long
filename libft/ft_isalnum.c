/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkalkasi <dkalkasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:31:58 by dkalkasi          #+#    #+#             */
/*   Updated: 2022/12/08 15:28:00 by dkalkasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/***
 * checks if character or if alphanumeric
*/
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
