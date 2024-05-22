/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:28:17 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/22 22:43:23 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_init_images(t_game *game)
{
	int	width;
	int	hight;

	game->player_image = mlx_xpm_file_to_image(game->mlx,
			PLAYER_IMAGE, &width, &hight);
	if (!game->player_image)
		ft_error_exit("Error: player image not found !\n");
	game->wall_image = mlx_xpm_file_to_image(game->mlx,
			ALL_IMAGE, &width, &hight);
	if (!game->wall_image)
		ft_error_exit("Error: wall image not found !\n");
	game->collectible_image = mlx_xpm_file_to_image(game->mlx,
			COLLECTIBLE_IMAGE, &width, &hight);
	if (!game->collectible_image)
		ft_error_exit("Error: collectible image not found !\n");
	game->exit_image = mlx_xpm_file_to_image(game->mlx,
			EXIT_IMAGE, &width, &hight);
	if (!game->exit_image)
		ft_error_exit("Error: exit image not found !\n");
	game->floor_image = mlx_xpm_file_to_image(game->mlx,
			FLOOR_IMAGE, &width, &hight);
	if (!game->floor_image)
		ft_error_exit("Error: floor image not found !\n");
}
