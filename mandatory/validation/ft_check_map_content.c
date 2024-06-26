/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_content.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:50:38 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 15:15:41 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_map_content(t_game *game)
{
	int		i;
	int		j;
	char	character;

	i = 0;
	while (game->map[i])
	{
		j = 0;
		while (game->map[i][j])
		{
			character = game->map[i][j];
			if (character != '1' && character != '0' && character != 'P'
				&& character != 'E' && character != 'C' && character != '\n')
			{
				ft_free_split(game->map, ft_split_count(game->map));
				ft_error_exit("Error: Invalid map content.\n");
			}
			j ++;
		}
		i++;
	}
}
