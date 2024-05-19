/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map_content.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:01:54 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 01:07:46 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_validate_map_content(t_game *game)
{
	int		i;

	i = 0;
	game->map->content = malloc(sizeof(char *) * (game->map->len + 1));
	if (game->map->content == NULL)
		ft_error_exit("Error: Malloc failed.\n");
	game->map->content[game->map->len] = NULL;
	while (i < game->map->len)
	{
		game->map->content[i] = get_next_line(game->map->map_fd);
		i++;
	}
	i = 0;
	while (game->map->content[i] != NULL)
	{
		ft_validate_line_content(game->map->content[i]);
		i ++;
	}
	ft_print_map(game->map->content);
}
