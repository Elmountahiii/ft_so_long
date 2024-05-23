/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:07:41 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 01:27:13 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../minilibx/mlx.h"
# include <stdbool.h>
# include "../lib/lib.h"

#define WIDTH_MAX 1992
#define HEIGHT_MAX 1080
#define PLAYER_IMAGE "/Users/elmountahi/13/fsl2/resources/my/player.xpm"
#define WALL_IMAGE "/Users/elmountahi/13/fsl2/resources/my/wall.xpm"
#define COLLECTIBLE_IMAGE "/Users/elmountahi/13/fsl2/resources/my/coin_1.xpm"
#define EXIT_IMAGE "/Users/elmountahi/13/fsl2/resources/my/new_exit.xpm"
#define FLOOR_IMAGE "/Users/elmountahi/13/fsl2/resources/my/floor.xpm"
#define LEFT_MOVE 1
#define RIGHT_MOVE 2
#define UP_MOVE 3
#define DOWN_MOVE 4


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
	int		player_x;
	int		player_y;
} t_map;

typedef struct s_game
{
	void	*mlx;
	void	*player_image;
	void	*wall_image;
	void	*exit_image;
	void	*collectible_image;
	void	*floor_image;
	int		x;
	int		y;
	int		width;
	int		height;
	void	*win;
	t_map	*map;
	int		movements_count;
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
void	ft_add_map_information(t_map *map);
void	ft_check_map_movement(t_map *map);
int		ft_check_reachable(char **map_cpy);
void	ft_init_images(t_game *game);
void	ft_get_player_starting(t_game *game);
void	ft_show_game(t_game *game);
void	ft_update_map(t_game *game, int key);
void	ft_move_down(t_game *game);
void	ft_move_left(t_game *game);
void	ft_move_up(t_game *game);
void	ft_move_right(t_game *game);
void	ft_get_dimensions(t_game *game);
void	ft_setup_map(t_game *game);
void	ft_move_player(t_game *game, int y, int x, int direction);
void	ft_print_movements(t_game *game);

// Debug
void	ft_print_line_content(char *line);
void	ft_print_map(char **map);

#endif