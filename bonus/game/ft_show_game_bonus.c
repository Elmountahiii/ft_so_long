/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_game_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:31:43 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 19:48:29 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static void	ft_put_wall(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx,
		game->win, game->wall_image, j * 64, i * 64);
}

static void	ft_put_floor(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx,
		game->win, game->floor_image, j * 64, i * 64);
}

static void	ft_put_demon(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->mlx,
		game->win, game->demon, x * 64, y * 64);
}

static void	ft_put_exit(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx,
		game->win, game->exit_image, j * 64, i * 64);
}

void	ft_show_game(t_game *game)
{
	int	y;
	int	j;

	y = 0;
	while (game->map[y])
	{
		j = 0;
		while (game->map[y][j])
		{
			if (game->map[y][j] == '1')
				ft_put_wall(game, y, j);
			else if (game->map[y][j] == '0')
				ft_put_floor(game, y, j);
			else if (game->map[y][j] == 'E')
				ft_put_exit(game, y, j);
			else if (game->map[y][j] == 'P')
				ft_put_player(game, y, j);
			else if (game->map[y][j] == 'D')
				ft_put_demon(game, y, j);
			j++;
		}
		y ++;
	}
	ft_print_movements(game);
}
