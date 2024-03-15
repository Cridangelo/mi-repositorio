/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:49:58 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/14 18:42:44 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	*array;
	size_t	i;

	array = malloc(num_elements * element_size);
	i = 0;
	if (array == -1)
		return (0);
	else
	{
		while (i < num_elements * element_size)
		{
			array[i] = 0;
			i++;
		}
	}
	return (array);
}
