/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoayo-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:18:57 by acoayo-f          #+#    #+#             */
/*   Updated: 2024/03/18 16:41:50 by acoayo-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *str, int c);
void	*ft_memset(void *ptr, int value, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*mempcy(void *dest, const void *src, size_t n);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
void	*ft_memchr(const void *ptr, int value, size_t num);
int		ft_isprint(int c);
in		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
void	*ft_calloc(size_t num_elements, size_t element_size);
void	ft_bzero(void *ptr, size_t num);
int		ft_atoi(const char *str);

#endif
