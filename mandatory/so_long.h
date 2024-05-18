/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:07:41 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/18 22:37:53 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "./MLX42.h"
# include "../lib/lib.h"

#define WIDTH 756
#define HEIGHT 756

int		ft_validate_extention(char *file);
void	ft_validate_map(char *file);
void	ft_validate_map_content(int fd, int len);
int		ft_count_map_lines(char *file);
void	ft_validate_line_content(char *line);
// Debug
void	ft_print_line_content(char *line);
void	ft_print_map(char **map);

#endif