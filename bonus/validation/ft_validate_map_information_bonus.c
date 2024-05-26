/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map_information_bonus.c                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:39:49 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:40:01 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_validate_map_information(t_game *game)
{
	if (game->player_count > 1 || game->player_count == 0)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error : invalid player count.\n");
	}
	if (game->collectible_count == 0)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error : map has no coins.\n");
	}
	if (game->exit_count > 1 || game->exit_count == 0)
	{
		ft_free_split(game->map, ft_split_count(game->map));
		ft_error_exit("Error : invalid exit.\n");
	}
}
