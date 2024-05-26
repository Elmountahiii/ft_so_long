/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_and_exit_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:26:38 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:26:51 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_clean_and_exit(t_game *game, char *message, int exit_code)
{
	if (game)
		ft_end_game(game);
	ft_printf("%s\n", message);
	exit(exit_code);
}
