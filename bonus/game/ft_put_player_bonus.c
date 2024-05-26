/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_player_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:30:42 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:30:56 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_put_player(t_game *game, int i, int j)
{
	if (game->player_direction == 1)
	{
		mlx_put_image_to_window(game->mlx,
			game->win, game->player_up, j * 64, i * 64);
	}
	else if (game->player_direction == 2)
	{
		mlx_put_image_to_window(game->mlx,
			game->win, game->player_image, j * 64, i * 64);
	}
	else if (game->player_direction == 3)
	{
		mlx_put_image_to_window(game->mlx,
			game->win, game->player_left, j * 64, i * 64);
	}
	else if (game->player_direction == 4)
	{
		mlx_put_image_to_window(game->mlx,
			game->win, game->player_right, j * 64, i * 64);
	}
}
