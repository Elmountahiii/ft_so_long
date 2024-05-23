/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:53:03 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 19:16:52 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_validate_map(t_game *game)
{
	ft_validate_extention(game);
	ft_add_map(game);
	ft_check_map_size(game);
	ft_check_map_content(game);
	ft_check_map_walls(game);
	ft_read_map_information(game);
	ft_validate_map_information(game);
	ft_check_map_path(game);
}
