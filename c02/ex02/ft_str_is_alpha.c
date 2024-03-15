/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:38:05 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/25 22:05:00 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	while (str[i])
	{
		if (!((str[a] >= 'A' && str[a] <= 'Z')))
			i++;
		if (!((str[a] >= 'a' && str[a] <= 'z')))
			i++;
		a++;
	}
	if (str[0] == '\0' || a == i)
		return (1);
	else
		return (0);
}
/*int main()
{
	char rts [] = "4";
	char  hola = ft_str_is_alpha(rts) + 48;
	write(1, &hola, 1);
	return 0;
}*/
