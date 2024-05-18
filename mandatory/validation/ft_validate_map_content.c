/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map_content.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:01:54 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/18 22:39:16 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_validate_map_content(int fd, int len)
{
	char 	**map;
	int		i;

	i = 0;
	map = malloc(sizeof(char *) * (len + 1));
	if (map == NULL)
		ft_error_exit("Error: Malloc failed.\n");
	map[len] = NULL;
	while (i < len)
	{
		map[i] = get_next_line(fd);
		i++;
	}
	i = 0;
	while (map[i] != NULL)
	{
		ft_validate_line_content(map[i]);
		i ++;
	}
	ft_print_map(map);
}
