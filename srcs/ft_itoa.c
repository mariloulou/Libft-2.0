/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcassar <mcassar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/10 14:56:32 by mcassar           #+#    #+#             */
/*   Updated: 2017/09/11 08:36:37 by mcassar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/libft.h"
#include <stdio.h>

static int		ft_mallocsize(int c, int min)
{
	int i;

	i = 1;
	if (min == 1)
		i++;
	while (c > 9)
	{
		c = c / 10;
		i++;
	}
	return (i);
}

char			*ft_ex(int c)
{
	if (c == 0)
		return (ft_strdup("0"));
	if (c == -2147483648)
		return (ft_strdup("-2147483648"));
	return (NULL);
}

char			*ft_itoa(int c)
{
	char	*chart;
	char	*ret;
	int		i;
	int		n;

	if (ft_ex(c) != NULL)
		return (ft_ex(c));
	n = (c < 0) ? 1 : 0;
	if (c < 0)
		c = -c;
	chart = ft_strdup("0123456789");
	ret = ft_strnew(ft_mallocsize(c, n));
	if (!ret)
		return (NULL);
	i = 0;
	while (c > 0)
	{
		ret[i++] = chart[c % 10];
		c = c / 10;
	}
	ret[i] = (n > 0) ? '-' : 0;
	ret = ft_strrev(ret);
	free(chart);
	return (ret);
}
