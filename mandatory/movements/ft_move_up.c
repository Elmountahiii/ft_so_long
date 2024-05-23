/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:15:26 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 01:20:27 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_move_up(t_game *game)
{
	if (game->map->content[game->y - 1][game->x] != '1')
	{
		if (game->map->content[game->y - 1][game->x] == 'C')
		{
			game->movements_count++;
			game->map->content[game->y][game->x] = '0';
			game->map->content[game->y - 1][game->x] = 'P';
			game->map->collectible_count--;
		}
		else if (game->map->content[game->y - 1][game->x] == 'E')
		{
			if (game->map->collectible_count == 0)
			{
				ft_move_player(game, game->y, game->x, UP_MOVE);
				ft_print_movements(game);
				printf("You won !\n");
				exit(0);
			}
			return ;
		}else
			ft_move_player(game, game->y, game->x, UP_MOVE);
		ft_print_movements(game);
	}
}
