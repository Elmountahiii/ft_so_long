/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:15:26 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/24 21:51:23 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_up(t_game *game)
{
	if (game->map[game->player_y - 1][game->player_x] != '1')
	{
		game->player_direction = 1;
		if (game->map[game->player_y - 1][game->player_x] == 'C')
		{
			game->movements_count++;
			game->map[game->player_y][game->player_x] = '0';
			game->map[game->player_y - 1][game->player_x] = 'P';
			game->collectible_count--;
		}
		else if (game->map[game->player_y - 1][game->player_x] == 'E')
		{
			if (game->collectible_count == 0)
			{
				ft_move_player(game, game->player_y, game->player_x, UP_MOVE);
				ft_print_movements(game);
				ft_printf("You won !\n");
				exit(0);
			}
			ft_move_player(game, game->player_y, game->player_x, UP_MOVE);
		}
		else
			ft_move_player(game, game->player_y, game->player_x, UP_MOVE);
		ft_print_movements(game);
	}
}
