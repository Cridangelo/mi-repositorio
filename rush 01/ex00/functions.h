/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:30:52 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/02/18 20:32:11 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef functions_h
#define functions_h
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);

int	ft_atoi(char *str);

int	ft_strlen(char *str);

int	*get_numbers(char *str);

int	check(int ac, char **av);

int	check_double(int tab[4][4], int pos, int num);

int	check_case(int tab[4][4], int pos, int entry[16]);

#endif
