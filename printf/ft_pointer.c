/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <acoayo-f@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:29:38 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/09/10 22:29:43 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pointer(size_t pointer, int *length)
{
	char	string[25];
	int		i;
	char	*base_character;

	base_character = "0123456789abcdef";
	i = 0;
	write(1, "0x", 2);
	(*length) += 2;
	if (pointer == 0)
	{
		ft_putcharacter_length('0', length);
		return ;
	}
	while (pointer != 0)
	{
		string[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putcharacter_length(string[i], length);
	}
}
