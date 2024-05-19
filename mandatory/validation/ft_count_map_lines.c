/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_map_lines.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:31:20 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 00:58:51 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_count_map_lines(char *file)
{
	int		len;
	int		fd;
	char	*line;
	
	len = 0;
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_error_exit("Error: Invalid file.\n");
	line = get_next_line(fd);
	while (line != NULL)
	{
		len++;
		free(line);
		line = get_next_line(fd);
	}
	close(fd);
	return (len);
}
