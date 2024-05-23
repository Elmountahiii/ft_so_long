/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:20:42 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 20:49:30 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static void	ft_get_map_x_y(t_game *game)
{
	int		i;
	char	*line;

	i = 0;
	line = get_next_line(game->fd);
	while (line && line[game->map_x])
		game->map_x++;
	game->map_x--;
	while (line)
	{
		game->map_y++;
		free(line);
		line = get_next_line(game->fd);
	}
	close(game->fd);
	game->fd = open(game->file, O_RDONLY);
	if (game->fd == -1)
		ft_clean_and_exit(game, "Error : invalid file .", 1);
}

void	ft_add_map(t_game *game)
{
	int		i;
	char	*line;

	ft_get_map_x_y(game);
	i = 0;
	game->map = malloc(sizeof(char *) * (game->map_y + 1));
	if (!game->map)
		ft_clean_and_exit(game, "Error : malloc", 1);
	game->map[game->map_y] = NULL;
	line = get_next_line(game->fd);
	while (line)
	{
		game->map[i] = ft_strdup(line);
		free(line);
		line = get_next_line(game->fd);
		i++;
	}
	close(game->fd);
}
