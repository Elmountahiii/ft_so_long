/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:28:17 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/20 22:15:15 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_init_images(t_game *game)
{
	int	width;
	int	hight;
	game->player_image = mlx_xpm_file_to_image(game->mlx, "/Users/yel-moun/projects/ft_so_long/resources/mario_player.xpm", &width, &hight);
	game->wall_image = mlx_xpm_file_to_image(game->mlx, "/Users/yel-moun/projects/ft_so_long/resources/wall_texture.xpm", &width, &hight);
	game->collectible_image = mlx_xpm_file_to_image(game->mlx, "/Users/yel-moun/projects/ft_so_long/resources/collectible_texture.xpm", &width, &hight);
	game->exit_image = mlx_xpm_file_to_image(game->mlx, "/Users/yel-moun/projects/ft_so_long/resources/exit_texture.xpm", &width, &hight);
	game->floor_image = mlx_xpm_file_to_image(game->mlx, "/Users/yel-moun/projects/ft_so_long/resources/floor_texture.xpm", &width, &hight);
	
}