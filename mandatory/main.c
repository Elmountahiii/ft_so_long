/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:06:01 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 01:16:51 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void check_leaks()
{	
	system("leaks so_long");
}

int main(int argc, char *argv[])
{
	t_game *game;
	atexit(check_leaks);
	if (argc == 2)
	{
		game = ft_init_struct(argv[1]);
		ft_validate_map(game);
		ft_clean_struct(game);
	}
	else
		ft_error_exit("Error: Invalid number of arguments.\n");
	
	return (0);	
}
