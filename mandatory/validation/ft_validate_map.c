/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_map.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 20:53:03 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/18 21:35:15 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_validate_map(char *file)
{
	int		fd;
	int		len;

	if (ft_validate_extention(file) == 0)
		ft_error_exit("Error: Invalid file extention.\n");
	fd = open(file, O_RDONLY);
	if (fd == -1)
		ft_error_exit("Error: Invalid file.\n");
	len = ft_count_map_lines(file);
	ft_validate_map_content(fd, len);
	close(fd);
}
