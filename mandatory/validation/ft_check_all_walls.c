/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_all_walls.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 12:51:31 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 12:58:27 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_check_all_walls(char *line, bool first)
{
	int	i;

	i = 0;
	if (first)
	{
		while (line && line[i])
		{
			if (i == ft_strlen(line) - 1)
				return (0);
			if (line[i] != '1')
				return (1);
			i ++;
		}
	}
	else
	{
		while (line && line[i])
		{
			if (line[i] != '1')
				return (1);
			i ++;
		}
	}
	return (0);
}
