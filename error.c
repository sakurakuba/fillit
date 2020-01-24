/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 20:35:39 by ksulaima          #+#    #+#             */
/*   Updated: 2020/01/22 19:09:53 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	error(size_t i)
{
	char const		*err_msg[3] = {"No error\n",
							"usage:\t./fillit\tsource_file\n", "error\n"};

	ft_putstr(err_msg[i]);
}
