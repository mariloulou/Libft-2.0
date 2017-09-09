/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xmain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/30 11:13:22 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/09 16:31:29 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "headers/libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1 = "\n\n\n\n\n\n";
	char	*s2 = "Salut";
	char	*src = "";

	printf("||%s||\n", ft_strtrim(s1));
	return (0);
}
