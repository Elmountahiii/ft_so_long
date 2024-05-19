/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:59:58 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 12:41:22 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_map_size(t_game *game)
{
	int	i;
	int	line_len;

	i = 0;
	if (game->map->len < 3)
		ft_error_exit("Map is too small\n");
	line_len = ft_strlen(game->map->content[0]);
	while (game->map->content[i] != NULL)
	{
		if (i == game->map->len - 1)
		{
			if (ft_strlen(game->map->content[i])  != (line_len - 1))
				ft_error_exit("Map is not a rectangle\n");
		}
		else if (ft_strlen(game->map->content[i]) != line_len)
			ft_error_exit("Map is not a rectangle\n");
		i++;
	}
}
