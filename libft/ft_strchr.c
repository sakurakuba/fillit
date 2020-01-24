/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:27:53 by ksulaima          #+#    #+#             */
/*   Updated: 2019/09/23 21:12:40 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *txt;

	txt = (char*)s;
	while (*txt)
	{
		if (*txt == c)
		{
			return (txt);
		}
		txt++;
	}
	if (*txt == '\0' && c == '\0')
	{
		return (txt);
	}
	return (NULL);
}
