/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:15:26 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/22 21:58:00 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_move_up(t_game *game)
{
	if (game->map->content[game->y - 1][game->x ] != '1')
	{
		if (game->map->content[game->y - 1][game->x ] == '0')
		{
			game->map->content[game->y - 1][game->x ] = 'P';
			game->map->content[game->y][game->x] = '0';
			game->movements_count++;	
		}
		if (game->map->content[game->y - 1][game->x] == 'C')
		{
			game->map->content[game->y - 1][game->x ] = 'P';
			game->map->content[game->y][game->x ] = '0';
			game->map->collectible_count --;	
			game->movements_count++;	
		}
		if (game->map->content[game->y - 1][game->x] == 'E')
		{
			if (game->map->collectible_count == 0)
			{
				game->movements_count++;	
				game->map->content[game->y - 1][game->x ] = 'P';
				game->map->content[game->y][game->x ] = '0';
				ft_show_game(game);
				printf("Movements : %d\n",game->movements_count);
				exit(0);
			}
			
		}
		if (game->map->content[game->y - 1][game->x] != 'E')
			printf("Movements : %d\n",game->movements_count);
	}

}
