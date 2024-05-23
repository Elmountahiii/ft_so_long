/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_game.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 23:57:53 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 19:11:07 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_game	*ft_init_game(char *file)
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	if (!game)
		ft_error_exit("Error: Malloc failed.\n");
	game->file = file;
	game->fd = -1;
	game->collectible_count = 0;
	game->exit_count = 0;
	game->player_count = 0;
	game->player_y = 0;
	game->player_x = 0;
	game->map_y = 0;
	game->map_x = 0;
	game->map = NULL;
	game->movements_count = 0;
	game->mlx = NULL;
	game->win = NULL;
	return (game);
}
