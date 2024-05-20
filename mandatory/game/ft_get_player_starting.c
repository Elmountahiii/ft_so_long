/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_player_starting.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:45:23 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/20 20:49:58 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_get_player_starting(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	while (game->map->content[y])
	{
		x = 0;
		while (game->map->content[y][x])
		{
			if (game->map->content[y][x] == 'P')
			{
				game->x = x;
				game->y = y;
				return;
			}
			x ++;
		}
		y ++;
	}
	
}