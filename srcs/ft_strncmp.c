/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 10:23:06 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/06 14:31:39 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (*s1 == 0 && *s2 == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && n-- > 0)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
