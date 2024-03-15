/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 18:43:13 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/15 19:35:57 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	size_t		i;
	const char	*array;

	i = 0;
	while (str[i] != '\0')
		i++;
	array = malloc((i + 1) * sizeof(const char));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		array[i] = str[i];
		i++;
	}
	array[i] = '\0';
	return ((char *)array);
}
