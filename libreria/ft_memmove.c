/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:56:21 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/15 19:24:57 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while (n > src)
		{
			*src = *dest;
			*src++;
			*dest++;
		}
	}
	if (dest > src)
	{
		while (n > 0)
		{
			*src = *dest;
			*src++;
			*dest++;
			n--;
		}
	}
	return (dest);
}
