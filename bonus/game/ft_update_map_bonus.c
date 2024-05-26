/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_map_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:32:17 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:32:31 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_update_map(t_game *game, int key)
{
	ft_update_player(game);
	if (key == 123)
		ft_move_left(game);
	else if (key == 124)
		ft_move_right(game);
	else if (key == 125)
		ft_move_down(game);
	else if (key == 126)
		ft_move_up(game);
}
