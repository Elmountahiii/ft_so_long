/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setup_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 19:00:43 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/22 22:46:53 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_setup_map(t_game *game)
{
	int	i;
	int	j;

	i = 0;
	while (game->map->content[i])
	{
		j = 0;
		while (game->map->content[i][j])
		{
			if (game->map->content[i][j] == '\n')
				break ;
			mlx_put_image_to_window(game->mlx,
				game->win, game->floor_image, j * 64, i * 64);
			j ++;
		}
		i++;
	}
	ft_show_game(game);
}
