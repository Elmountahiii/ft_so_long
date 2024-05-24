/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 00:12:33 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/24 22:20:50 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_move_player(t_game *game, int y, int x, int direction)
{
	static int check = 0;

	game->movements_count++;
	if (check == 1 && --check == 0)
		game->map[y][x] = 'E';
	if (direction == UP_MOVE && game->map[y - 1][x] == 'E')
		check = 1;
	else if (direction == DOWN_MOVE && game->map[y + 1][x] == 'E')
		check = 1;
	else if (direction == LEFT_MOVE && game->map[y][x - 1] == 'E')
		check = 1;
	else if (direction == RIGHT_MOVE && game->map[y][x + 1] == 'E')
		check = 1;
	if (direction == UP_MOVE)
		game->map[y - 1][x] = 'P';
	else if (direction == DOWN_MOVE)
		game->map[y + 1][x] = 'P';
	else if (direction == LEFT_MOVE)
		game->map[y][x - 1] = 'P';
	else if (direction == RIGHT_MOVE)
		game->map[y][x + 1] = 'P';
	if (game->map[y][x] != 'E')
		game->map[y][x] = '0';
	//ft_print_movements(game);	
}
