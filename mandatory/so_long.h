/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:07:41 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 13:03:00 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "./MLX42.h"
# include <stdbool.h>
# include "../lib/lib.h"

#define WIDTH 756
#define HEIGHT 756

typedef struct s_map
{
	int		len;
	char	*file;
	char	**content;
	int		map_fd;
	bool	is_valid;
	int		player_count;
	int		exit_count;
	int		collectible_count;
} t_map;

typedef struct s_game
{
	void	*mlx;
	void	*win;
	t_map	*map;
} t_game;

int		ft_validate_extention(char *file);
void	ft_validate_map(t_game *game);
void	ft_validate_map_content(t_game *game);
int		ft_count_map_lines(char *file);
void	ft_validate_line_content(char *line);
int		ft_open_map_file(char *map_file);
t_game *ft_init_struct(char *map_file);
void	ft_init_map(t_game *game);
void	ft_clean_map(t_map *map);
void	ft_clean_game(t_game *game);
void	ft_clean_struct(t_game *game);
void	ft_check_map_walls(char **map);
void	ft_add_map_content(t_map *map);
void	ft_check_map_shape(t_game *map);
void	ft_check_map_size(t_game *game);
int		ft_check_all_walls(char *line, bool first);
// Debug
void	ft_print_line_content(char *line);
void	ft_print_map(char **map);

#endif