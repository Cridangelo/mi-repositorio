/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:44:00 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/04/04 18:50:45 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*desty;
	unsigned char	*cpy;
	size_t			i;

	desty = (unsigned char *)dst;
	cpy = (unsigned char *)src;
	if (dst == 0 && src == 0)
		return (0);
	if (cpy < desty && desty < cpy + len)
	{
		i = len;
		while (i > 0)
		{
			desty[i - 1] = cpy[i - 1];
			i--;
		}
		return (desty);
	}
	i = 0;
	while (i < len)
	{
		desty[i] = cpy[i];
		i++;
	}
	return (desty);
}
