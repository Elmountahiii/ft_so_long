/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map_content.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:01:54 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 12:12:56 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_validate_map_content(t_game *game)
{
	int		i;

	i = 0;
	ft_add_map_content(game->map);
	ft_check_map_shape(game);
	ft_check_map_walls(game->map->content);
	ft_print_map(game->map->content);
}
