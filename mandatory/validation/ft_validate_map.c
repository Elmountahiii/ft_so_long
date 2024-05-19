/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:53:03 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 01:05:03 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_validate_map(t_game *game)
{
	if (ft_validate_extention(game->map->file) == 0)
		ft_error_exit("Error: Invalid file extention.\n");
	game->map->map_fd = open(game->map->file, O_RDONLY);
	if (game->map->map_fd == -1)
		ft_error_exit("Error: Invalid file.\n");
	game->map->len = ft_count_map_lines(game->map->file);
	ft_validate_map_content(game);
	close(game->map->map_fd);
}
