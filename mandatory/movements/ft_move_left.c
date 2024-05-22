/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_left.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:15:10 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/22 21:45:05 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_move_left(t_game *game)
{
	if (game->map->content[game->y ][game->x - 1 ] != '1')
	{
		if (game->map->content[game->y ][game->x - 1] == '0')
		{
			game->map->content[game->y ][game->x - 1 ] = 'P';
			game->map->content[game->y][game->x] = '0';
			game->movements_count++;	
		}
		if (game->map->content[game->y][game->x - 1] == 'C')
		{
			game->map->content[game->y][game->x - 1] = 'P';
			game->map->content[game->y][game->x ] = '0';
			game->map->collectible_count --;	
			game->movements_count++;	
		}
		if (game->map->content[game->y][game->x - 1] == 'E')
		{
			if (game->map->collectible_count == 0)
			{
				game->movements_count++;
				game->map->content[game->y][game->x - 1] = 'P';
				game->map->content[game->y][game->x ] = '0';
				printf("Movements : %d\n",game->movements_count); 
				exit(0);	
			}
			
			
		}
		if (game->map->content[game->y - 1][game->x] != 'E')
			printf("Movements : %d\n",game->movements_count);
	}
}