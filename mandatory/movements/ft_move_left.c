/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:15:10 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 19:38:57 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_left(t_game *game)
{
	if (game->map[game->player_y][game->player_x - 1] != '1')
	{
		if (game->map[game->player_y][game->player_x - 1] == 'C')
		{
			game->movements_count++;
			game->map[game->player_y][game->player_x] = '0';
			game->map[game->player_y][game->player_x - 1] = 'P';
			game->collectible_count--;
		}
		else if (game->map[game->player_y][game->player_x - 1] == 'E')
		{
			if (game->collectible_count == 0)
			{
				ft_move_player(game, game->player_y, game->player_x, LEFT_MOVE);
				ft_printf("You won !\n");
				exit(0);
			}
			return ;
		}
		else
			ft_move_player(game, game->player_y, game->player_x, LEFT_MOVE);
		ft_print_movements(game);
	}
}
