/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_map_content.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 11:39:03 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 11:48:33 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_add_map_content(t_map *map)
{
	int		i;

	i = 0;
	map->content = malloc(sizeof(char *) * (map->len + 1));
	if (map->content == NULL)
		ft_error_exit("Error: Malloc failed.\n");
	map->content[map->len] = NULL;
	while (i < map->len)
	{
		map->content[i] = get_next_line(map->map_fd);
		i++;
	}
	i = 0;
}
