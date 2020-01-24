/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isqrtc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:33:45 by ksulaima          #+#    #+#             */
/*   Updated: 2020/01/19 20:37:39 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

size_t	ft_isqrtc(size_t n)
{
	size_t x;
	size_t y;

	y = 1;
	x = n;
	while (x > y)
	{
		x = (x + y) / 2;
		y = n / x;
	}
	if (x * x != n)
		x++;
	return (x);
}

int		ft_abs(int i)
{
	int const mask = i >> (sizeof(int) * 8 - 1);

	return ((i + mask) ^ mask);
}
