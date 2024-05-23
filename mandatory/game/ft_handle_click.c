/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_click.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:32:57 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 18:09:53 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_handle_click(int key, t_game *game)
{
	if (key == 53)
	{
		mlx_destroy_window(game->mlx, game->win);
		exit(0);
	}
	else if (key == 123 || key == 124 || key == 125 || key == 126)
	{
		ft_update_map(game, key);
		ft_show_game(game);
	}
	return (0);
}
