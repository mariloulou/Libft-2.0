/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 08:17:11 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/05 08:33:56 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_itoa_base(int nb, int base);

size_t	ft_strlcat(char *s1, const char *s2, size_t size);
size_t	ft_strlen(const char *s);

void	ft_bitoi(char **tab, int nb);
void	ft_bzero(char *s, size_t n);
void	ft_putchar(char c);
void	ft_putchar_unicode(wchar_t c);

void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void * dst, const void * src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(char *str, int c, size_t n);

#endif
