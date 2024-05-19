/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_shape.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:55:52 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 12:40:19 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_check_map_shape(t_game *map)
{
	int i;

	i = 0;
	ft_check_map_size(map);
	while (map->map->content[i] != NULL)
	{
		ft_validate_line_content(map->map->content[i]);
		i++;
	}
}