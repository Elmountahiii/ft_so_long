/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_struct.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 23:57:53 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/22 22:44:28 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

t_game	*ft_init_struct(char *map_file)
{
	t_game	*game;

	game = malloc(sizeof(t_game));
	if (!game)
		ft_error_exit("Error: Malloc failed.\n");
	ft_init_map(game);
	game->map->file = map_file;
	game->movements_count = 0;
	return (game);
}
