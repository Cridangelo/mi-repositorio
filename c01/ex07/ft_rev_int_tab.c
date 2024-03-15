/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 19:49:20 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/20 20:32:55 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	a;
	int	z;

	a = 0;
	z = size -1;
	while (a < z)
	{
		temp = tab[a];
		tab[a] = tab[z];
		tab[z] = temp;
		a++;
		z--;
	}
}
