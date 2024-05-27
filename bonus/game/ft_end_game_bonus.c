/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_game_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:27:35 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 19:56:02 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static void	destroy_coins_images(t_game *game)
{
	if (game->collectible_image)
		mlx_destroy_image(game->mlx, game->collectible_image);
	if (game->coin_1)
		mlx_destroy_image(game->mlx, game->coin_1);
	if (game->coin_2)
		mlx_destroy_image(game->mlx, game->coin_2);
	if (game->coin_3)
		mlx_destroy_image(game->mlx, game->coin_3);
	if (game->coin_4)
		mlx_destroy_image(game->mlx, game->coin_4);
	if (game->demon)
		mlx_destroy_image(game->mlx, game->demon);
}

void	ft_end_game(t_game *game)
{
	if (game->player_image)
		mlx_destroy_image(game->mlx, game->player_image);
	if (game->player_left)
		mlx_destroy_image(game->mlx, game->player_left);
	if (game->player_right)
		mlx_destroy_image(game->mlx, game->player_right);
	if (game->player_up)
		mlx_destroy_image(game->mlx, game->player_up);
	if (game->wall_image)
		mlx_destroy_image(game->mlx, game->wall_image);
	if (game->floor_image)
		mlx_destroy_image(game->mlx, game->floor_image);
	if (game->exit_image)
		mlx_destroy_image(game->mlx, game->exit_image);
	destroy_coins_images(game);
	if (game->mlx && game->win)
		mlx_destroy_window(game->mlx, game->win);
	if (game->map)
		ft_free_split(game->map, ft_split_count(game->map));
}
