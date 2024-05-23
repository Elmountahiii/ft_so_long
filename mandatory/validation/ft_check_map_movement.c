/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_movement.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:30:43 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 01:09:41 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_map_movement(t_map *map)
{
	char	**map_cpy;
	int		i;

	i = 0;
	map_cpy = malloc(sizeof(char *) * (map->len  + 1) );
	if (map_cpy == NULL)
		ft_error_exit("Error: Malloc failed.\n");
	while (i < map->len)
	{
		map_cpy[i] = ft_strdup(map->content[i]);
		i++;
	}
	map_cpy[i] = NULL;
	ft_flood_fil(map_cpy, map->player_x, map->player_y);
	if (ft_check_reachable(map_cpy))
	{
		ft_free_split(map_cpy,ft_split_count(map_cpy));
		ft_error_exit("Error : Map is not valid. \n");
	}
	ft_free_split(map_cpy,ft_split_count(map_cpy));
}
