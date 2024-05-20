/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 22:16:07 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/20 22:18:14 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_show_game(t_game *game)
{
	int i;
	int j;

	i = 0;
	mlx_clear_window(game->mlx, game->win);
	while (game->map->content[i])
	{
		j = 0;
		while (game->map->content[i][j])
		{
			if (game->map->content[i][j] == '1')
				mlx_put_image_to_window(game->mlx, game->win, game->wall_image , j * 64, i * 64);
			if (game->map->content[i][j] == '0')
				mlx_put_image_to_window(game->mlx, game->win, game->floor_image , j * 64, i * 64);
			if (game->map->content[i][j] == 'C')
				mlx_put_image_to_window(game->mlx, game->win, game->collectible_image , j * 64, i * 64);
			if (game->map->content[i][j] == 'E')
				mlx_put_image_to_window(game->mlx, game->win, game->exit_image , j * 64, i * 64);
			j++;
		}
		i ++;
	}
	mlx_put_image_to_window(game->mlx, game->win, game->player_image , game->x * 64, game->y *64 );
}
