/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_walls.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:21:27 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 13:10:51 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_map_walls(char **map)
{
	int		i;
	int		last;

	i = 0;
	while (map[i] != NULL)
	{
		if (map[i][0] != '1' || map[i][ft_strlen(map[i]) - 2] != '1')
			ft_error_exit("Map is not surrounded by walls\n");
		last = i;
		i++;
	}
	if (ft_check_all_walls(map[0], true) ||ft_check_all_walls(map[last], false) )
		ft_error_exit("Map is not surrounded by walls\n");
}
