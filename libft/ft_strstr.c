/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:42:49 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/10 17:56:24 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	if (!*s2)
		return ((char *)s1);
	while (*s1)
	{
		if (!ft_memcmp(s1, s2, ft_strlen(s2)))
			return ((char*)s1);
		s1++;
	}
	return (NULL);
}
