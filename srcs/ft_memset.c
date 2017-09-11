/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 08:15:07 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/10 16:24:37 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

void	*ft_memset(char *str, int c, size_t n)
{
	unsigned int	i;
	char			*s;

	i = 0;
	s = str;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
