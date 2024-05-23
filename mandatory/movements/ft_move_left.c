/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:15:10 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 01:20:03 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_move_left(t_game *game)
{
	if (game->map->content[game->y][game->x - 1] != '1')
	{
		if (game->map->content[game->y][game->x - 1 ] == 'C')
		{
			game->movements_count++;
			game->map->content[game->y][game->x] = '0';
			game->map->content[game->y][game->x - 1] = 'P';
			game->map->collectible_count--;
		} else if (game->map->content[game->y][game->x - 1] == 'E')
		{
			if (game->map->collectible_count == 0)
			{
				ft_move_player(game, game->y, game->x, LEFT_MOVE);
				printf("You won !\n");
				exit(0);
			}
			return ;
		}
		else
			ft_move_player(game, game->y, game->x, LEFT_MOVE);
		ft_print_movements(game);
	}
}
