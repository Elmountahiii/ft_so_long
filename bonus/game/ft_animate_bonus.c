/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animate_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 19:18:31 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/27 12:38:58 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_animate(t_game *game, int y, int x, int *i)
{
	if (*i == 100)
		ft_put_coin_0(game, y, x);
	else if (*i == 1500)
		ft_put_coin_1(game, y, x);
	else if (*i == 2900)
		ft_put_coin_2(game, y, x);
	else if (*i == 4300)
		ft_put_coin_3(game, y, x);
	else if (*i == 5800)
		ft_put_coin_4(game, y, x);
	else if (*i == 8000)
		*i = 0;
}
