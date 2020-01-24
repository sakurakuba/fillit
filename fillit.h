/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ksulaima <ksulaima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/08 21:27:52 by ksulaima          #+#    #+#             */
/*   Updated: 2020/01/19 20:40:01 by ksulaima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct		s_tetris
{
	int				x[2][4];
	int				n;
	struct s_tetris	*next;
}					t_tetris;

size_t				ft_isqrtc(size_t n);
int					ft_abs(int i);
void				error(size_t i);
t_tetris			*reader(int fd, size_t *n);
void				ft_solve(t_tetris *node, size_t n);
t_tetris			*new_tetr(t_tetris **tab);
int					ft_move(t_tetris *tab);
int					tetr_add(t_tetris *t, int n);
int					validate(char *buff, ssize_t bytesread, t_tetris *tab);
void				list_dell(t_tetris **tab);
char				*ft_create_map(size_t n);
int					ft_put_tetr(t_tetris node, size_t n, char *map, ssize_t *i);
void				ft_free_c(char *map, t_tetris node, size_t i, size_t n);
int					ft_print_map(char *map, size_t n);
int					ft_backtrack(char *map, t_tetris *node, size_t n);

#endif
