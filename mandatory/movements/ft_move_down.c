/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:15:00 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 17:00:58 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_down(t_game *game)
{
	if (game->map[game->player_y + 1][game->player_x] != '1')
	{
		game->player_direction = 2;
		if (game->map[game->player_y + 1][game->player_x] == 'C')
		{
			game->collectible_count--;
			ft_move_player(game, game->player_y, game->player_x, DOWN_MOVE);
		}
		else
		{
			if (game->map[game->player_y + 1][game->player_x] == 'E')
			{
				if (game->collectible_count == 0)
				{
					game->movements_count++;
					ft_print_movements(game);
					ft_clean_and_exit(game, "You won!", 0);
				}
			}
			ft_move_player(game, game->player_y, game->player_x, DOWN_MOVE);
		}
		ft_print_movements(game);
	}
}
