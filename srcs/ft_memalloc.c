/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 15:49:56 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/06 16:01:47 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memalloc(size_t size)
{
	char *s1;
	void *s2;
	size_t i;

	i = 0;
	s2 = (void *)malloc(sizeof(*s1) * size);
	if (s2 == NULL)
		return (0);
	s1 = (char *)s2;
	while (i < size)
	{
		s1[i] = 0;
		i++;
	}
	return (s1);
}
