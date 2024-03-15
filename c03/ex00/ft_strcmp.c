/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:54:10 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/25 19:14:20 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*int main()
{
	char *str1 = "Hola";;
	char *str2 = "Holasd";
	if(ft_strcmp(str1, str2) < 0)
	{
		write(1, "-1", 2);
	}
	if(ft_strcmp(str1, str2) > 0)
	{
		write(1, "1", 1);
	}
	if(ft_strcmp(str1,str2) == 0)
	{
		write(1, "0", 1);
	}
	return (0);
}*/
