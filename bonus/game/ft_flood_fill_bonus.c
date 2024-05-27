/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flood_fill_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 15:08:58 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 16:00:18 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_flood_fil_bonus(char **map, int x, int y)
{
	if ((map[x][y] == '1' || map[x][y] == '*'))
		return ;
	if (map[x][y] == 'D')
	{
		map[x][y] = '1';
		return ;
	}
	map[x][y] = '*';
	ft_flood_fil_bonus(map, x - 1, y);
	ft_flood_fil_bonus(map, x + 1, y);
	ft_flood_fil_bonus(map, x, y - 1);
	ft_flood_fil_bonus(map, x, y + 1);
}
