/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_and_exit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 20:36:44 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/23 20:39:32 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_clean_and_exit(t_game *game ,char * message, int exit_code)
{
	ft_end_game(game);
	ft_printf("%s\n",message);
	exit(exit_code);
}
