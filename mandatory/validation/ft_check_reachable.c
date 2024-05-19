/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_reachable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:00:31 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 18:38:15 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_reachable(char **map_cpy)
{
	int		i;
	int		j;

	i = 0;
	while (map_cpy && map_cpy[i])
	{
		j = 0;
		while (map_cpy[i][j])
		{
			if (map_cpy[i][j] == 'P'  || map_cpy[i][j] == 'C')
					return (1);
			j ++;
		}
		i ++;
	}
	return (0);
}