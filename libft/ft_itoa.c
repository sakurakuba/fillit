/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 00:47:34 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/11 01:52:28 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	j = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (str == 0)
		return (0);
	str[j] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i += 1;
	}
	while (i < j--)
	{
		str[j] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
