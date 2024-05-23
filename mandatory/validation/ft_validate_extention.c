/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_extention.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:37:31 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 20:48:18 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_validate_extention(t_game *game)
{
	char	*extention;

	extention = ft_strrchr(game->file, '.');
	if (extention == NULL || ft_strlen(extention) != 4)
		ft_clean_and_exit(game, "Error: Invalid file extention.", 1);
	if (ft_strcmp(extention, ".ber") == 0)
	{
		game->fd = open(game->file, O_RDONLY);
		if (game->fd == -1)
			ft_clean_and_exit(game, "Error: Invalid file.", 1);
		return ;
	}
	else
		ft_clean_and_exit(game, "Error: Invalid file extention.", 1);
}
