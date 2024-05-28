/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map_information_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:38:28 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/28 12:22:04 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static void	ft_check_demon_count(t_game *game)
{
	int	y;
	int	x;
	int	count;

	count = 0;
	y = 0;
	while (game->map && game->map[y])
	{
		x = 0;
		while (game->map[y][x])
		{
			if (game->map[y][x] == 'D')
				count ++;
			x++;
		}
		y ++;
	}
	if (count == 0 && count < 3)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error : invalid number of enemy.\n");
	}
}

static void	ft_update_position(t_game *game, int i, int j)
{
	game->player_x = i;
	game->player_y = j;
}

void	ft_read_map_information(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map && game->map[i])
	{
		j = 0;
		while (game->map[i][j] && game->map[i][j])
		{
			if (game->map[i][j] == 'P')
			{
				ft_update_position(game, i, j);
				game->player_count ++;
			}
			else if (game->map[i][j] == 'C')
				game->collectible_count ++;
			else if (game->map[i][j] == 'E')
				game->exit_count ++;
			else if (game->map[i][j] == 'D')
				game->demon_count++;
			j++;
		}
		i ++;
	}
	ft_check_demon_count(game);
}
