/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_coin_4_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:15:36 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 19:46:13 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_put_coin_4(t_game *game, int y, int x)
{
	mlx_put_image_to_window(game->mlx, game->win,
		game->floor_image, x * 64, y * 64);
	mlx_put_image_to_window(game->mlx, game->win,
		game->coin_4, x * 64, y * 64);
}
