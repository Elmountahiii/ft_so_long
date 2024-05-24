/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_images.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:28:17 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/24 19:38:13 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_init_images_2(t_game *game)
{
	int	width;
	int	hight;

	game->player_left =  mlx_xpm_file_to_image(game->mlx,
			PLAYER_LEFT, &width, &hight);
	game->player_right =  mlx_xpm_file_to_image(game->mlx,
			PLAYER_RIGHT, &width, &hight);
	game->player_up = mlx_xpm_file_to_image(game->mlx,
			PLAYER_UP, &width, &hight);
	game->coin_1 = mlx_xpm_file_to_image(game->mlx,
			COIN_1, &width, &hight);
	game->coin_2 = mlx_xpm_file_to_image(game->mlx,
			COIN_2, &width, &hight);
	game->coin_3 = mlx_xpm_file_to_image(game->mlx,
			COIN_3, &width, &hight);
	game->coin_4 = mlx_xpm_file_to_image(game->mlx,	
			COIN_4, &width, &hight);
}
void	ft_init_images(t_game *game)
{
	int	width;
	int	hight;

	game->player_image = mlx_xpm_file_to_image(game->mlx,
			PLAYER_IDL, &width, &hight);
	if (!game->player_image)
		ft_clean_and_exit(game ,"Error: player image not found !", 1);
	game->wall_image = mlx_xpm_file_to_image(game->mlx,
			WALL_IMAGE, &width, &hight);
	if (!game->wall_image)
		ft_clean_and_exit(game, "Error: wall image not found !", 1);
	game->collectible_image = mlx_xpm_file_to_image(game->mlx,
			COLLECTIBLE_IMAGE, &width, &hight);
	if (!game->collectible_image)
		ft_clean_and_exit(game, "Error: collectible image not found !", 1);
	game->exit_image = mlx_xpm_file_to_image(game->mlx,
			EXIT_IMAGE, &width, &hight);
	if (!game->exit_image)
		ft_clean_and_exit(game, "Error: exit image not found !", 1);
	game->floor_image = mlx_xpm_file_to_image(game->mlx,
			FLOOR_IMAGE, &width, &hight);
	if (!game->floor_image)
		ft_clean_and_exit(game, "Error: floor image not found !", 1);
	ft_init_images_2(game);
}
