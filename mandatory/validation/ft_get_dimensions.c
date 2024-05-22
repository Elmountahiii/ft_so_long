/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_dimensions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 18:08:34 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/22 19:11:46 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_get_dimensions(t_game *game)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	while (game->map->content[y])
		y++;
	game->height = y;
	y = 0;
	while (game->map->content[y][x])
	{
		x++;
	}
	game->width = (x -1);
	
}