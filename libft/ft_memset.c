/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 11:52:14 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/01 21:19:01 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*k;
	size_t			i;

	i = 0;
	k = s;
	while (i < n)
	{
		k[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
