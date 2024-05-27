/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:06:01 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 18:29:20 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

static void	ft_init_mlx(t_game *game)
{
	game->mlx = mlx_init();
	if (!game->mlx)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error : mlx\n");
	}
	if (game->map_x * 64 > WIDTH_MAX || game->map_y * 64 > HEIGHT_MAX)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error : map too big\n");
	}
	game->win = mlx_new_window(game->mlx,
			game->map_x * 64, game->map_y * 64, "so_long");
	if (!game->win)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error : mlx");
	}
}

int	main(int argc, char *argv[])
{
	t_game	game;

	if (argc == 2)
	{
		ft_init_game(&game, argv[1]);
		ft_validate_map(&game);
		ft_init_mlx(&game);
		ft_init_images(&game);
		ft_setup_map(&game);
		ft_update_player(&game);
		ft_show_game(&game);
		mlx_hook(game.win, 2, 0, ft_handle_click, &game);
		mlx_hook(game.win, 17, 0, ft_handle_close_win, &game);
		mlx_loop(game.mlx);
	}
	else
		ft_error_exit("Error: Invalid number of arguments.\n");
	return (0);
}
