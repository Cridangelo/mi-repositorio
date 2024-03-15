/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:14:41 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/29 16:11:46 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				resp;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && n - 1 > i)
	{
		i++;
	}
	resp = s1[i] - s2[i];
	return (resp);
}
/*int main()
{
	char *str1 = "Hola";
	char *str2 = "Holas";
	int n = 5;
	if(ft_strncmp(str1, str2, n) < 0)
	{
		write(1, "-1", 2);
	}
	if(ft_strncmp(str1, str2, n) > 0)
	{
		write(1, "1", 1);
	}
	if(ft_strncmp(str1,str2, n) == 0)
	{
		write(1, "0", 1);
	}
	return 0;
}*/
