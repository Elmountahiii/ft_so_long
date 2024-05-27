/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_right.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:12:46 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 17:00:40 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_right(t_game *game)
{
	if (game->map[game->player_y][game->player_x + 1] != '1')
	{
		game->player_direction = 4;
		if (game->map[game->player_y][game->player_x + 1] == 'C')
		{
			game->collectible_count--;
			ft_move_player(game, game->player_y, game->player_x, RIGHT_MOVE);
		}
		else
		{
			if (game->map[game->player_y][game->player_x + 1] == 'E')
			{
				if (game->collectible_count == 0)
				{
					game->movements_count++;
					ft_print_movements(game);
					ft_clean_and_exit(game, "You won!", 0);
				}
			}
			ft_move_player(game, game->player_y, game->player_x, RIGHT_MOVE);
		}
		ft_print_movements(game);
	}
}
