/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_click_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:28:11 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:28:25 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

int	ft_handle_click(int key, t_game *game)
{
	if (key == 53)
		ft_clean_and_exit(game, "Game Over", 0);
	else if (key == 123 || key == 124 || key == 125 || key == 126)
	{
		ft_update_map(game, key);
		ft_show_game(game);
	}
	return (0);
}
