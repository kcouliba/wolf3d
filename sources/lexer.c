/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexer.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 16:40:39 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/29 17:22:36 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static	size_t	is_closed_map(char **map)
{
	return (0);
}

static	size_t	check_map_chars(char *inline_map)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (inline_map[i])
	{
		j = 0;
		while (inline_map[i] != VALID_CHARS[j])
		{
			if (j >= ft_strlen(VALID_CHARS))
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

size_t			lexer(t_map *map)
{
	size_t	ok;

	ok = is_closed_map(map->inline_map);
	ok = (!ok) ? check_map_chars : ok;
	return (ok);
}
