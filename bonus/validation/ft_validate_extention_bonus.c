/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_extention_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:38:57 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:39:36 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_validate_extention(t_game *game)
{
	char	*extention;

	extention = ft_strrchr(game->file, '.');
	if (extention == NULL || ft_strlen(extention) != 4)
		ft_error_exit("Error: Invalid file extention.\n");
	if (ft_strcmp(extention, ".ber") == 0)
	{
		game->fd = open(game->file, O_RDONLY);
		if (game->fd == -1)
			ft_error_exit("Error: Invalid file.\n");
		return ;
	}
	else
		ft_error_exit("Error: Invalid file extention.\n");
}
