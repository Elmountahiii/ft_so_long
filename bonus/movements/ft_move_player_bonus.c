/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_player_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:34:13 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:34:27 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static void	ft_check_is_exit(t_game *game, int y, int x, int *check)
{
	if (*check == 1)
	{
		game->map[y][x] = 'E';
		*check = 0;
	}
}

void	ft_move_player(t_game *game, int y, int x, int direction)
{
	static int	check = 0;

	game->movements_count++;
	ft_check_is_exit(game, y, x, &check);
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
}
