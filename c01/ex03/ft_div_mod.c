/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 19:11:10 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/21 16:35:32 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int main()
{
int a, b, div, mod;
a=10;
b=3;
ft_div_mod(a, b, &div, &mod);
printf( "Division: %d / %d = %d\n", a, b, div);
printf("Modulo: %d %% %d = %d\n", a, b, mod);
return 0;
}

