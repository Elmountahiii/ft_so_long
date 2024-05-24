/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:16:07 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/24 19:09:49 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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

// static void	ft_put_collectible(t_game *game, int i, int j)
// {
	
// 	mlx_put_image_to_window(game->mlx,
// 		game->win, game->collectible_image, j * 64, i * 64);
// }

static void	ft_put_exit(t_game *game, int i, int j)
{
	mlx_put_image_to_window(game->mlx,
		game->win, game->exit_image, j * 64, i * 64);
}

void	ft_show_game(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			if (game->map[i][j] == '1')
				ft_put_wall(game, i, j);
			else if (game->map[i][j] == '0')
				ft_put_floor(game, i, j);
			// else if (game->map[i][j] == 'C')
			// 	ft_put_collectible(game, i, j);
			else if (game->map[i][j] == 'E')
				ft_put_exit(game, i, j);
			else if (game->map[i][j] == 'P')
			{
				if (game->player_direction == 1)
				{
					mlx_put_image_to_window(game->mlx,
					game->win, game->player_up, j * 64, i * 64);
				}else if (game->player_direction == 2)
				{
					mlx_put_image_to_window(game->mlx,
					game->win, game->player_image, j * 64, i * 64);
				}else if (game->player_direction == 3)
				{
					mlx_put_image_to_window(game->mlx,
					game->win, game->player_left, j * 64, i * 64);
				}else if (game->player_direction == 4)
				{
					mlx_put_image_to_window(game->mlx,
					game->win, game->player_right, j * 64, i * 64);
				}
			}
			j++;
		}
		i ++;
	}
}
