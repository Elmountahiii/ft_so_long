/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 00:25:28 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 00:30:50 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_init_map(t_game *game)
{
	game->map = malloc(sizeof(t_map));
	if (game->map == NULL)
		ft_error_exit("Error: Malloc failed.\n");
	game->map->content = NULL;
	game->map->collectible_count = 0;
	game->map->player_count = 0;
	game->map->exit_count = 0;
	game->map->map_fd = -1;
	game->map->len = 0;
	game->map->file = NULL;
	game->map->is_valid = false;
}
