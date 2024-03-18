/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 17:49:58 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/18 16:20:52 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void	*array;
	size_t	i;
	char	*ptr;

	array = malloc(num_elements * element_size);
	i = 0;
	if (array == NULL)
		return (NULL);
	ptr = (char *)array;
	while (i < num_elements * element_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (array);
}
