/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <acoayo-f@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:31:49 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/09/10 22:32:35 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void			ft_putcharacter_length(char character, int *length);
void			ft_string(char *args, int *length);

void			ft_number(int number, int *length);
void			ft_hexadecimal(unsigned int x, int *length, char x_or_x);
void			ft_unsigned_int(unsigned int u, int *length);
void			ft_pointer(size_t pointer, int *length);

int				ft_printf(const char *string, ...);

#endif
