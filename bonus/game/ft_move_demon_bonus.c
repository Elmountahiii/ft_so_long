/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_demon_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:06:02 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 16:03:22 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static int	ft_is_path(t_game *game, int y, int x)
{
	if (game->map[y][x] == 'C' || game->map[y][x] == '1'
	|| game->map[y][x] == 'D' || game->map[y][x] == 'E')
		return (0);
	return (1);
}

static void	ft_change_position(t_game *game, int y, int x)
{
	if (ft_is_path(game, y, x + 1))
	{
		if (game->map[y][x + 1] == 'P')
			ft_clean_and_exit(game, "Game over.", 1);
		game->map[y][x + 1] = 'D';
		game->map[y][x] = '0';
	}
	else if (ft_is_path(game, y, x - 1))
	{
		if (game->map[y][x - 1] == 'P')
			ft_clean_and_exit(game, "Game over.", 1);
		game->map[y][x - 1] = 'D';
		game->map[y][x] = '0';
	}
	ft_show_game(game);
}

int	ft_move_demon(t_game *game)
{
	int			y;
	int			x;

	y = 0;
	while (game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'D')
			{
				ft_change_position(game, y, x);
				break ;
			}
			x ++;
		}
		y ++;
	}
	return (0);
}
