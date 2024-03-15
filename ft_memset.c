/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:01:54 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/12 18:40:07 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	j;

	*p = ptr;
	j = (unsigned char)value;
	while (num--)
	{
		*ptr++ = j;
	}
	return (ptr);
}
