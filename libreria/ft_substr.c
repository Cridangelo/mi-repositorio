/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 19:12:16 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/04/04 20:14:20 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	large;

	i = 0;
	if (!s)
		return (0);
	large = ft_strlen(s);
	if (start >= large)
		return (0);
	if (large <= start + len)
		len = large - start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i <= len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
