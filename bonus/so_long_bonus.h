/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:23:59 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 22:17:20 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../minilibx/mlx.h"
# include <stdbool.h>
# include "../lib/lib.h"

# define WIDTH_MAX 2432
# define HEIGHT_MAX 1088
# define PLAYER_IDL "./resources/character/char_idl.xpm"
# define PLAYER_LEFT "./resources/character/char_left.xpm"
# define PLAYER_RIGHT "./resources/character/char_right.xpm"
# define PLAYER_UP "./resources/character/char_top.xpm"
# define WALL_IMAGE "./resources/wall.xpm"
# define EXIT_IMAGE "./resources/exit_2.xpm"
# define FLOOR_IMAGE "./resources/floor.xpm"
# define DEMON_IMAGE "./resources/demon.xpm"
# define COLLECTIBLE_IMAGE "./resources/coins/coin_0.xpm"
# define COIN_1 "./resources/coins/coin_1.xpm"
# define COIN_2 "./resources/coins/coin_2.xpm"
# define COIN_3 "./resources/coins/coin_3.xpm"
# define COIN_4 "./resources/coins/coin_4.xpm"
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
	void	*player_left;
	void	*player_right;
	void	*player_up;
	void	*wall_image;
	void	*exit_image;
	void	*collectible_image;
	void	*floor_image;
	void	*coin_1;
	void	*coin_2;
	void	*coin_3;
	void	*coin_4;
	void	*demon;
	int		player_count;
	int		exit_count;
	int		collectible_count;
	int		demon_count;
	int		player_x;
	int		player_y;
	int		map_x;
	int		map_y;
	char	**map;
	int		player_direction;
	int		movements_count;
}	t_game;

// Debug
void	ft_print_line_content(char *line);
void	ft_print_map(char **map);
// Game
void	ft_draw_floor(t_game *game);
int		ft_handle_click(int key, t_game *game);
void	ft_init_game(t_game *game, char *file);
void	ft_init_images(t_game *game);
void	ft_print_movements(t_game *game);
void	ft_setup_map(t_game *game);
void	ft_update_map(t_game *game, int key);
void	ft_update_player(t_game *game);
void	ft_show_game(t_game *game);
void	ft_end_game(t_game *game);
int		ft_handle_close_win(t_game *game);
void	ft_clean_and_exit(t_game *game, char *message, int exit_code);
void	ft_put_player(t_game *game, int i, int j);
void	ft_draw_floor(t_game *game);
void	ft_animate(t_game *game, int y, int x, int *i);
void	ft_put_coin_0(t_game *game, int y, int x);
void	ft_put_coin_1(t_game *game, int y, int x);
void	ft_put_coin_2(t_game *game, int y, int x);
void	ft_put_coin_3(t_game *game, int y, int x);
void	ft_put_coin_4(t_game *game, int y, int x);
int		ft_animate_coins(t_game *game);
int		ft_move_demon(t_game *game);
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