/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_map_information_bonus.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:38:28 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:38:40 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

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
				game->player_x = i;
				game->player_y = j;
				game->player_count ++;
			}
			if (game->map[i][j] == 'C')
				game->collectible_count ++;
			if (game->map[i][j] == 'E')
				game->exit_count ++;
			j++;
		}
		i ++;
	}
}
