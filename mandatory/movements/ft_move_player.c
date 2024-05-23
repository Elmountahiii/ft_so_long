/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 00:12:33 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 17:41:56 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_player(t_game *game, int y, int x, int direction)
{
	game->movements_count++;
	if (direction == UP_MOVE)
		game->map[y - 1][x] = 'P';
	else if (direction == DOWN_MOVE)
		game->map[y + 1][x] = 'P';
	else if (direction == LEFT_MOVE)
		game->map[y][x - 1] = 'P';
	else if (direction == RIGHT_MOVE)
		game->map[y][x + 1] = 'P';
	game->map[y][x] = '0';
}
