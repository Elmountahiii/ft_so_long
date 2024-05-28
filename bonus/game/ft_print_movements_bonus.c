/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_movements_bonus.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:30:16 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/28 12:24:34 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_print_movements(t_game *game)
{
	char	*counter;

	counter = ft_itoa(game->movements_count);
	mlx_string_put(game->mlx, game->win, 10, 10, 0xe8e8e8, "MOVES :");
	mlx_string_put(game->mlx, game->win, 85, 10, 0xe8e8e8, counter);
	free(counter);
}
