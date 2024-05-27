/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_up_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:35:10 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 19:48:15 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_move_up(t_game *game)
{
	if (game->map[game->player_y - 1][game->player_x] != '1')
	{
		game->player_direction = 1;
		if (game->map[game->player_y - 1][game->player_x] == 'C')
		{
			game->collectible_count--;
			ft_move_player(game, game->player_y, game->player_x, UP_MOVE);
		}
		else
		{
			if (game->map[game->player_y - 1][game->player_x] == 'E')
			{
				if (game->collectible_count == 0)
				{
					game->movements_count++;
					ft_print_movements(game);
					ft_clean_and_exit(game, "You won!", 0);
				}
			}
			ft_move_player(game, game->player_y, game->player_x, UP_MOVE);
		}
	}
}
