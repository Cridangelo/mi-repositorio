/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharacter_length.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <acoayo-f@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:30:20 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/09/10 22:30:27 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putcharacter_length(char character, int *length)
{
	write(1, &character, 1);
	(*length)++;
}
