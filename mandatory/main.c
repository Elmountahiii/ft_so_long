/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:06:01 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/24 20:45:44 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ll()
{
	system("leaks so_long");
}

int	coin_anim(t_game *game)
{
	int	y;
	int	x;
	static int h = 0;


	y = 0;

	while (y < game->map_y)
	{
		x = 0;
		while (game->map[y][x] != '\0')
		{
			if (game->map[y][x] == 'C')
			{
				if (h == 100)
				{
				 	mlx_put_image_to_window(game->mlx, game->win, game->floor_image, x * 64, y * 64);
					mlx_put_image_to_window(game->mlx, game->win, game->collectible_image,x * 64, y * 64);
					
				}
				else if (h == 1500)
				{
					mlx_put_image_to_window(game->mlx, game->win, game->floor_image, x * 64, y * 64);
					mlx_put_image_to_window(game->mlx, game->win, game->coin_1,x * 64, y * 64);
				}
				else if (h == 2900)
				{
					mlx_put_image_to_window(game->mlx, game->win, game->floor_image, x * 64, y * 64);

				 	mlx_put_image_to_window(game->mlx, game->win, game->coin_2,x * 64, y * 64);
				}
				else if (h == 4300)
				{
				   mlx_put_image_to_window(game->mlx, game->win, game->floor_image, x * 64, y * 64);
					mlx_put_image_to_window(game->mlx, game->win, game->coin_3,x * 64, y * 64);
				}
				else if (h == 5800)
				{
					mlx_put_image_to_window(game->mlx, game->win, game->floor_image, x * 64, y * 64);

					mlx_put_image_to_window(game->mlx, game->win, game->coin_4,x * 64, y * 64);
				}
				else if (h == 6000)
					h = 0;
			}
			x ++;
		
		}
		y ++;
	}
	h ++;
	return (0);
}
int	main(int argc, char *argv[])
{
	t_game	game;
	atexit(ll);
	if (argc == 2)
	{
		 ft_init_game(&game, argv[1]);
		ft_validate_map(&game);
		game.mlx = mlx_init();
		if (!game.mlx)
			ft_clean_and_exit(&game, "Error : mlx", 1);
		if ((game.map_x * 64) > WIDTH_MAX || (game.map_y * 64) > HEIGHT_MAX)
			ft_clean_and_exit(&game, "Error: map is too big.", 1);
		game.win = mlx_new_window(game.mlx,
				game.map_x * 64, game.map_y * 64, "so_long");
		if (!game.win)
			ft_clean_and_exit(&game, "Error : mlx", 1);
		ft_init_images(&game);
		ft_setup_map(&game);
		ft_update_player(&game);
		ft_show_game(&game);
		mlx_hook(game.win, 2, 0, ft_handle_click, &game);
		mlx_hook(game.win, 17, 0, ft_handle_close_win, &game);
		mlx_loop_hook(game.mlx, coin_anim, &game);
		mlx_loop(game.mlx);
	}
	else
		ft_error_exit("Error: Invalid number of arguments.\n");
	return (0);
}
