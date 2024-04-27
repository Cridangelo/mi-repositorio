/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:40:46 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/04/27 17:47:19 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned int	i;

	i = 0;
	ptr = dest;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
		ptr[i] = ((unsigned const char *)src)[i];
		i++;
	}
	return (dest);
}
