/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:40:25 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/28 12:41:15 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

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
