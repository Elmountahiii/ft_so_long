/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validate_extention.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-moun <yel-moun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 17:37:31 by yel-moun          #+#    #+#             */
/*   Updated: 2024/05/19 20:06:23 by yel-moun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

int	ft_validate_extention(char *file)
{
	char	*extention;

	extention = ft_strrchr(file, '.');
	if (extention == NULL || ft_strlen(extention) != 4)
		return (0);
	if (ft_strcmp(extention, ".ber") == 0)
		return (1);
	return (0);
}