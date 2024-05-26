/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_game_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:29:12 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:29:25 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_init_game(t_game *game, char *file)
{
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
	game->player_direction = 2;
	game->index = 0;
}
