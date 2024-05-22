/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_and_exit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 00:34:06 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/22 22:34:35 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_clean_and_exit(t_game *game, char *message)
{
	ft_clean_map(game->map);
	ft_clean_game(game);
	ft_error_exit(message);
}
