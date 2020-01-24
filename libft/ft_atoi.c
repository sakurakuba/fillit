/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 19:00:30 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/10 18:40:14 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int i;
	unsigned int negative;
	unsigned int res;

	i = 0;
	negative = 1;
	res = 0;
	while ((str[i] != '\0') && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
	{
		i++;
	}
	if (str[i] == '-')
	{
		negative = -1;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' & str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * negative);
}
