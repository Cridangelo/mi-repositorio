/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:58:41 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/18 16:22:49 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *ptr, int value, size_t num)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = ptr;
	while (i != num)
	{
		if (p[i] == (unsigned char)value)
			return ((void *)(p + i));
		i++;
	}
	return (NULL);
}
