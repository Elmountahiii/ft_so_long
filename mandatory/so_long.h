/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:07:41 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 20:39:49 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../minilibx/mlx.h"
# include <stdbool.h>
# include "../lib/lib.h"

# define WIDTH_MAX 1992
# define HEIGHT_MAX 1080
# define PLAYER_IMAGE "./resources/my/player.xpm"
# define WALL_IMAGE "./resources/my/wall.xpm"
# define COLLECTIBLE_IMAGE "./resources/my/coin_0.xpm"
# define EXIT_IMAGE "./resources/my/new_exit.xpm"
# define FLOOR_IMAGE "./resources/my/floor.xpm"
# define LEFT_MOVE 1
# define RIGHT_MOVE 2
# define UP_MOVE 3
# define DOWN_MOVE 4

typedef struct s_game
{
	void	*mlx;
	void	*win;
	int		fd;
	char	*file;
	void	*player_image;
	void	*wall_image;
	void	*exit_image;
	void	*collectible_image;
	void	*floor_image;
	int		player_count;
	int		exit_count;
	int		collectible_count;
	int		player_x;
	int		player_y;
	int		map_x;
	int		map_y;
	char	**map;
	int		movements_count;
}	t_game;

// Debug
void	ft_print_line_content(char *line);
void	ft_print_map(char **map);
// Game
void	ft_draw_floor(t_game *game);
int		ft_handle_click(int key, t_game *game);
t_game	*ft_init_game(char *file);
void	ft_init_images(t_game *game);
void	ft_print_movements(t_game *game);
void	ft_setup_map(t_game *game);
void	ft_update_map(t_game *game, int key);
void	ft_update_player(t_game *game);
void	ft_show_game(t_game *game);
void	ft_end_game(t_game *game);
int		ft_handle_close_win(t_game *game);
void	ft_clean_and_exit(t_game *game ,char * message, int exit_code);
// Movements
void	ft_move_down(t_game *game);
void	ft_move_left(t_game *game);
void	ft_move_player(t_game *game, int y, int x, int direction);
void	ft_move_right(t_game *game);
void	ft_move_up(t_game *game);
// Validation
void	ft_add_map(t_game *game);
void	ft_check_map_content(t_game *game);
void	ft_check_map_path(t_game *game);
void	ft_check_map_size(t_game *game);
void	ft_check_map_walls(t_game *game);
void	ft_read_map_information(t_game *game);
void	ft_validate_extention(t_game *game);
void	ft_validate_map_information(t_game *game);
void	ft_validate_map(t_game *game);

#endif