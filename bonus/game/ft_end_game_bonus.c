/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_end_game_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:27:35 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:27:49 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_end_game(t_game *game)
{
	if (game->player_image)
		mlx_destroy_image(game->mlx, game->player_image);
	if (game->wall_image)
		mlx_destroy_image(game->mlx, game->wall_image);
	if (game->floor_image)
		mlx_destroy_image(game->mlx, game->floor_image);
	if (game->floor_image)
		mlx_destroy_image(game->mlx, game->exit_image);
	if (game->mlx && game->win)
		mlx_destroy_window(game->mlx, game->win);
	if (game->map)
		ft_free_split(game->map, ft_split_count(game->map));
}
