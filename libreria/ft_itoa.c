/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 21:04:48 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/04/02 21:30:48 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	i = ft_intlen(n);
	str = ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == -2147483648)
		ft_strlcpy(str, "-2147483648", 12);
	if (n == 0)
		str[0] = '0';
	if (n < 0 && n != -2147483648)
	{
		str[0] = '-';
		n = -n;
	}
	str[i] = '\0';
	while (n != 0 && n != -2147483648)
	{
		i--;
		str[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}