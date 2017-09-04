/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 08:18:02 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/04 09:14:56 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char *ret;

	first = dst;
	while (*src)
		*dst++ = *src++;
	*dst = '\0';
	return(ret);
}
