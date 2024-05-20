/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:06:01 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/20 22:27:47 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void check_leaks()
{	
	//system("leaks so_long");
}
int ft_click(int key,t_game *game)
{
	printf("key = %d\n", key);
	if (key == 123)
	{
		if (game->map->content[game->y][game->x - 1] != '1')
		{
			if (game->map->content[game->y][game->x - 1] == 'C')
			{
				game->map->content[game->y][game->x - 1] = '0';
				game->map->collectible_count--;
			}
			game->x--;
		}
	}
	if (key == 124)
	{
		if (game->map->content[game->y][game->x + 1] != '1')
		{
			if (game->map->content[game->y][game->x + 1] == 'C')
			{
				game->map->content[game->y][game->x + 1] = '0';
				game->map->collectible_count--;
			}
			game->x++;
		}
	}
	if (key == 126)
	{
		
		if (game->map->content[game->y - 1][game->x] != '1')
		{
			if (game->map->content[game->y - 1][game->x] == 'C')
			{
				game->map->content[game->y - 1][game->x] = '0';
				game->map->collectible_count--;
			}
			game->y --;
		}
	}
	if (key == 125)
	{
		if (game->map->content[game->y + 1][game->x] != '1')
		{
			if (game->map->content[game->y + 1][game->x] == 'C')
			{
				game->map->content[game->y + 1][game->x] = '0';
				game->map->collectible_count--;
			}
			game->y ++;
		}
	}
	ft_show_game(game);
	return (0);
}

int main(int argc, char *argv[])
{
	t_game *game;
	atexit(check_leaks);
	if (argc == 2)
	{
		game = ft_init_struct(argv[1]);
		ft_validate_map(game);
		game->mlx = mlx_init();
		game->win = mlx_new_window(game->mlx, 23 * 64, 11 * 64, "so_long");
		ft_init_images(game);
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

