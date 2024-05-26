/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animate_coins_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:03:54 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 19:48:45 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_put_coin_0(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->floor_image, x * 64, y * 64);
	mlx_put_image_to_window(game->mlx, game->win,
		game->collectible_image, x * 64, y * 64);
}

void	ft_put_coin_1(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->floor_image, x * 64, y * 64);
	mlx_put_image_to_window(game->mlx, game->win,
		game->coin_1, x * 64, y * 64);
}

void	ft_put_coin_2(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->floor_image, x * 64, y * 64);
	mlx_put_image_to_window(game->mlx,
		game->win, game->coin_2, x * 64, y * 64);
}

void	ft_put_coin_3(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->mlx,
		game->win, game->floor_image, x * 64, y * 64);
	mlx_put_image_to_window(game->mlx,
		game->win, game->coin_3, x * 64, y * 64);
}

int	ft_animate_coins(t_game *game)
{
	int			y;
	int			x;
	static int	i = 0;

	y = 0;
	while (y < game->map_y)
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'C')
				ft_animate(game, y, x, &i);
			x ++;
		}
		y ++;
	}
	i ++;
	return (0);
}
