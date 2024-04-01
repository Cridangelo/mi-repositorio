/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <acoayo-f@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 17:03:49 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/04/01 23:00:36 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	a;
	size_t	z;

	if (s1 != '\0' && set != '\0')
	{
		a = 0;
		z = ft_strlen(s1);
		while (s1[a] && ft_strchr(set, s1[a]))
			a++;
		while (s1[z - 1] && ft_strchr(set, s1[z - 1]) && z > a)
			z--;
		str = malloc(sizeof(char) * (z - a + 1));
		if (!str)
			return (0);
		if (str)
			ft_strlcpy(str, &s1[a], z - a + 1);
	}
	return (str);
}
