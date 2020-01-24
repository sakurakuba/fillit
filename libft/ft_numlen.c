/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 01:50:16 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/11 18:27:58 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n)
{
	int count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < count)
		count += 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}
