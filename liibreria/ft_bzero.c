/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 18:07:19 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/12 18:40:29 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *ptr, size_t num)
{
	unsigned char	*p;

	*p = ptr;
	while (num--)
	{
		*ptr++ = 0;
	}
	return (ptr);
}
