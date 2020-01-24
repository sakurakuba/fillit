/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:32:52 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/11 18:25:59 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	unsigned int		i;
	unsigned int		len;
	char				*str;

	len = 0;
	while (s1[len] != '\0')
	{
		len++;
	}
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
