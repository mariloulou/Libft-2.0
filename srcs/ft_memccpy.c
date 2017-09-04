/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/02 09:01:01 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/03 08:05:25 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int	i;
	char			*s;
	unsigned char	*d;

	i = 0;
	d = dst;
	s = (char *)src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
