/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flood_fil.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 15:32:25 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 11:36:06 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

void	ft_flood_fil(char **map, int x, int y)
{
	if ((map[x][y] == '1' || map[x][y] == '*'))
		return ;
	map[x][y] = '*';
	ft_flood_fil(map, x - 1, y);
	ft_flood_fil(map, x + 1, y);
	ft_flood_fil(map, x, y - 1);
	ft_flood_fil(map, x, y + 1);
}
