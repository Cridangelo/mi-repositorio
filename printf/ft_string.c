/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <acoayo-f@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:28:44 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/09/10 22:28:50 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_string(char *args, int *length)
{
	size_t	i;

	i = 0;
	if (!args)
	{
		write(1, "(nil)", 5);
		(*length) += 5;
		return ;
	}
	while (args[i] != '\0')
	{
		ft_putcharacter_length(args[i], length);
		i++;
	}
}
