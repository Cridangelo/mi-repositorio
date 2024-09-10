/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <acoayo-f@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:30:02 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/09/10 22:30:03 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_int(unsigned int u, int *length)
{
	if (u >= 10)
		ft_unsigned_int(u / 10, length);
	ft_putcharacter_length(u % 10 + '0', length);
}
