/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:59:58 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 15:12:58 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_map_size(t_game *game)
{
	int	i;
	int	line_len;

	i = 0;
	line_len = ft_strlen(game->map[0]);
	while (game->map[i])
	{
		if (i == game->map_y - 1)
		{
			if (ft_strlen(game->map[i]) != (line_len - 1))
			{
				ft_free_split(game->map, ft_split_count(game->map));
				ft_error_exit("Error : Map is not a rectangle.\n");
			}
		}
		else if (ft_strlen(game->map[i]) != line_len)
		{
			ft_free_split(game->map, ft_split_count(game->map));
			ft_error_exit("Error : Map is not a rectangle\n");
		}
		i++;
	}
}
