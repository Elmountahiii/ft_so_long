/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:28:17 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 17:20:00 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	init_images_2(t_game *game)
{
	int	width;
	int	hight;

	game->wall_image = mlx_xpm_file_to_image(game->mlx,
			WALL_IMAGE, &width, &hight);
	if (!game->wall_image)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error: wall image not found !\n");
	}
	game->collectible_image = mlx_xpm_file_to_image(game->mlx,
			COLLECTIBLE_IMAGE, &width, &hight);
	if (!game->collectible_image)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error: collectible image not found !\n");
	}
}

static void	init_player_images(t_game *game)
{
	int	width;
	int	hight;

	game->player_image = mlx_xpm_file_to_image(game->mlx,
			PLAYER_IDL, &width, &hight);
	game->player_left = mlx_xpm_file_to_image(game->mlx,
			PLAYER_LEFT, &width, &hight);
	game->player_right = mlx_xpm_file_to_image(game->mlx,
			PLAYER_RIGHT, &width, &hight);
	game->player_up = mlx_xpm_file_to_image(game->mlx,
			PLAYER_UP, &width, &hight);
	if (!game->player_image || !game->player_left || !game->player_right
		|| !game->player_up)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error: player image not found !\n");
	}
}

void	ft_init_images(t_game *game)
{
	int	width;
	int	hight;

	init_player_images(game);
	game->exit_image = mlx_xpm_file_to_image(game->mlx,
			EXIT_IMAGE, &width, &hight);
	if (!game->exit_image)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error: exit image not found !\n");
	}
	game->floor_image = mlx_xpm_file_to_image(game->mlx,
			FLOOR_IMAGE, &width, &hight);
	if (!game->floor_image)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error: floor image not found !\n");
	}
	init_images_2(game);
}
