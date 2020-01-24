/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 21:42:04 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/10 22:33:57 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	n;

	if (*s2)
	{
		n = ft_strlen(s2);
		while (ft_strncmp(s1, s2, n) && n <= len && len-- && *s1)
			s1++;
		if (!*s1 || !len || n > len)
			return (NULL);
	}
	return ((char *)s1);
}
