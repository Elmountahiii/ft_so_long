/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_walls_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:38:02 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 16:14:13 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

static int	ft_check_all_walls(char *line, bool first)
{
	int	i;

	i = 0;
	if (first)
	{
		while (line && line[i])
		{
			if (i == ft_strlen(line) - 1)
				return (0);
			if (line[i] != '1')
				return (1);
			i ++;
		}
	}
	else
	{
		while (line && line[i])
		{
			if (line[i] != '1')
				return (1);
			i ++;
		}
	}
	return (0);
}

void	ft_check_map_walls(t_game *game)
{
	int		i;
	int		last;

	i = 0;
	while (game->map[i] != NULL)
	{
		if (game->map[i][0] != '1'
			|| game->map[i][ft_strlen(game->map[i]) - 2] != '1')
		{
			ft_free_split(game->map, ft_split_count(game->map));
			ft_error_exit("Error : Map is not surrounded by walls\n");
		}
		last = i;
		i++;
	}
	if (ft_check_all_walls(game->map[0], true)
		|| ft_check_all_walls(game->map[last], false))
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error : Map is not surrounded by walls\n");
	}
}
