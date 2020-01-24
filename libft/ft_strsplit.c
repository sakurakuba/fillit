/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 00:51:16 by ksulaima          #+#    #+#             */
/*   Updated: 2019/10/11 01:43:43 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_num(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			return (count);
		while (str[i] != c && str[i] != '\0')
			i++;
		count++;
	}
	return (count);
}

static int		ft_wlen(char const *str, char c)
{
	int i;
	int size;

	i = 0;
	size = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		size++;
	}
	return (size);
}

char			**ft_strsplit(char const *str, char c)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	if (str == NULL)
		return (NULL);
	j = 0;
	k = ft_num(str, c);
	i = 0;
	split = malloc(sizeof(char *) * (k + 1));
	if (split == NULL)
		return (NULL);
	while (k > 0)
	{
		while (*str == c)
			str++;
		split[j] = ft_strsub(str, i, ft_wlen(str, c));
		str = str + ft_wlen(str, c);
		j++;
		k--;
	}
	split[j] = NULL;
	return (split);
}
