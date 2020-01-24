/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 14:15:05 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/10 17:52:00 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t k;
	size_t len;

	k = ft_strlen(dst);
	len = ft_strlen(src);
	if (size < k)
		len += size;
	else
		len += k;
	while (*src && k + 1 < size)
	{
		dst[k++] = *src;
		src++;
	}
	dst[k] = '\0';
	return (len);
}
