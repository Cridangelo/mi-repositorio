/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 23:42:24 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/29 15:38:59 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*punt;

	punt = dest;
	while (n > 0 && *src != '\0')
	{
		*dest++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*dest++ = '\0';
		n--;
	}
	return (punt);
}
/*int main ()
{
	char tesd[] = "holacasita";
	char rsc[] = "Palabra";
	ft_strncpy(tesd, rsc, 4);
	printf("%s", tesd);
	return 0;
}*/
