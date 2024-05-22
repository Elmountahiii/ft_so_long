/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:06:01 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/22 22:32:42 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


int ft_click(int key,t_game *game)
{
	if (key == 53)
	{
		mlx_destroy_window(game->mlx, game->win);
		exit(0);
	}
	else if (key == 123 || key == 124 || key == 125 || key == 126)
	{
		ft_update_map(game, key);
		ft_show_game(game);
	}
	return (0);
}

int main(int argc, char *argv[])
{
	t_game *game;
	// atexit(check_leaks);
	if (argc == 2)
	{
		game = ft_init_struct(argv[1]);
		ft_validate_map(game);
		game->mlx = mlx_init();
		printf("%d - %d\n",game->width * 64,game->height * 64);
		if ((game->width * 64) > WIDTH_MAX || (game->height * 64) > HEIGHT_MAX)
			ft_error_exit("Error: map is too big.\n");
		game->win = mlx_new_window(game->mlx,game->width * 64, game->height * 64, "so_long");
		ft_init_images(game);
		ft_setup_map(game);
		ft_get_player_starting(game);
		ft_show_game(game);
		mlx_hook(game->win,2 , 0, ft_click, game);
		mlx_loop(game->mlx);
		//ft_clean_struct(game);
	}
	else
		ft_error_exit("Error: Invalid number of arguments.\n");
	
	return (0);	
}

