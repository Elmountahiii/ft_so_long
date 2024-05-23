/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_map.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:07:34 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 01:18:56 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void ft_update_map(t_game *game, int key)
{
	ft_get_player_starting(game);
	if (key == 123)
		ft_move_left(game);
	else if (key == 124)
		ft_move_right(game);
	else if (key == 125)
		ft_move_down(game);
	else if (key == 126)
		ft_move_up(game);
}
