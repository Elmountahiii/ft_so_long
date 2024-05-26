/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_map_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:26:05 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:26:18 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_print_map(char **map)
{
	int		i;

	i = 0;
	while (map[i] != NULL)
	{
		ft_print_line_content(map[i]);
		i++;
	}
	write(1, "\n", 1);
}
