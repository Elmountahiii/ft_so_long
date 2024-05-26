/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_demon_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 22:06:02 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 22:52:03 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static void	ft_change_position(t_game *game, int y, int x)
{
	if (game->map[y + 1][x] != 'C' && game->map[y + 1][x] != '1' )
	{
		ft_print_map(game->map);
		ft_printf("move demon down\n");
		game->map[y + 1][x] = 'D';
		game->map[y][x] = '0';
		ft_print_map(game->map);
		ft_show_game(game);
	
		
	}else if (game->map[y - 1][x] != 'C' && game->map[y - 1][x] != '1' )
	{
		ft_print_map(game->map);
		ft_printf("move demon up\n");
		game->map[y - 1][x] = 'D';
		game->map[y][x] = '0';
		ft_print_map(game->map);
		ft_show_game(game);
	}
	// else if (game->map[y ][x + 1] != 'C' && game->map[y][x + 1] != '1')
	// {
	// 	ft_print_map(game->map);
	// 	ft_printf("move demon right\n");
	// 	game->map[y][x + 1] = 'D';
	// 	game->map[y][x] = '0';
	// 	ft_print_map(game->map);
	// 	ft_show_game(game);
	// }
	// else if (game->map[y ][x - 1] != 'C' && game->map[y][x - 1] != '1')
	// {
	// 	ft_print_map(game->map);
	// 	ft_printf("move demon left\n");
	// 	game->map[y][x - 1] = 'D';
	// 	game->map[y][x] = '0';
	// 	ft_print_map(game->map);
	// 	ft_show_game(game);
	
	// }
	// ft_print_map(game->map);
	// ft_show_game(game);
}

int	ft_move_demon(t_game *game)
{
	int			y;
	int			x;
	static int	delay = 0;
	y = 0;
	if (delay >= 5500)
	{
		while (game->map[y])
		{
			x = 0;
			while (game->map[y][x])
			{
				if (game->map[y][x] == 'D')
				{
					ft_change_position(game, y, x);
				}
				x ++;
			}
			y++;
		}
	delay = 0;
	}
	delay ++; 
	return 0;	
}