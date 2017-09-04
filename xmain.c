/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 11:13:22 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/03 15:51:39 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "headers/libft.h"
#include <stdio.h>

int	main(void)
{
	char	s1[] = "";
	char	*src = "";

	printf("%i\n", memcmp(s1, src, 40));
	printf("%i", ft_memcmp(s1, src, 40));
	return (0);
}
