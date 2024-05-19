/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_map_information.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 14:13:43 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 14:33:48 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_add_map_information(t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (map->content && map->content[i])
	{
		j = 0;
		while (map->content[i][j] && map->content[i][j])
		{
			if (map->content[i][j] == 'P')
				map->player_count ++;
			if (map->content[i][j] == 'C')
				map->collectible_count ++;
			if (map->content[i][j] == 'E')
				map->exit_count ++;
			j++;
		}
		i ++;
	}
	if (map->player_count > 1 || map->player_count == 0)
		ft_error_exit("Error : invalid player count.\n");
	if (map->collectible_count == 0)
		ft_error_exit("Error : map has no coins.\n");
	if (map->exit_count > 1 || map->exit_count == 0)
		ft_error_exit("Error : invalid exit.\n");
	printf("player_count = %d\n",map->player_count);
	printf("collectible_count = %d\n",map->collectible_count);
	printf("exit_count = %d\n",map->exit_count);
}
