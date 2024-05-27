/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 18:59:25 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 18:31:45 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

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
	if (game->exit_count)
		mlx_destroy_image(game->mlx, game->exit_image);
	if (game->mlx && game->win)
		mlx_destroy_window(game->mlx, game->win);
	if (game->map)
		ft_free_split(game->map, ft_split_count(game->map));
}
