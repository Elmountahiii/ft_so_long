/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_path.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 17:06:22 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 17:08:57 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static int	ft_check_reachable(char **map_cpy)
{
	int		i;
	int		j;

	i = 0;
	while (map_cpy && map_cpy[i])
	{
		j = 0;
		while (map_cpy[i][j])
		{
			if (map_cpy[i][j] == 'P' || map_cpy[i][j] == 'C'
				|| map_cpy[i][j] == 'E')
				return (1);
			j ++;
		}
		i ++;
	}
	return (0);
}

void	ft_check_map_path(t_game *game)
{
	char	**map_cpy;
	int		i;

	i = 0;
	map_cpy = malloc(sizeof(char *) * (game->map_y + 1));
	if (map_cpy == NULL)
		ft_error_exit("Error: Malloc failed.\n");
	while (i < game->map_y)
	{
		map_cpy[i] = ft_strdup(game->map[i]);
		i++;
	}
	map_cpy[i] = NULL;
	ft_flood_fil(map_cpy, game->player_x, game->player_y);
	if (ft_check_reachable(map_cpy))
	{
		ft_free_split(map_cpy, ft_split_count(map_cpy));
		ft_error_exit("Error : Map is not valid. \n");
	}
	ft_free_split(map_cpy, ft_split_count(map_cpy));
}
