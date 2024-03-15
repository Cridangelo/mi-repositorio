/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 18:01:54 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/15 19:29:59 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*p;
	unsigned char	j;

	p = (unsigned char *)ptr;
	j = (unsigned char)value;
	while (num--)
		*p++ = j;
	return (ptr);
}
