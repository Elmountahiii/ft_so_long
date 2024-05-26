/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_line_content_bonus.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:23:43 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/26 17:25:44 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_bonus.h"

void	ft_print_line_content(char *line)
{
	int		i;

	i = 0;
	while (line[i] != '\0')
	{
		write(1, &line[i], 1);
		i++;
	}
}
