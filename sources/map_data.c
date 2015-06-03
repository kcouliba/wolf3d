/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_data.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 21:09:44 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 21:20:05 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

static	void	init_minimap(t_minimap *map)
{
	map->size = MINIMAPSIZE;
	while ((map->size % map->grid_size) != 0)
		++map->grid_size;
	map->square_size = map->size / map->grid_size;
}

void			init_map(t_map *map, char *inline_map)
{
	map->inline_map = ft_strdup(inline_map);
	map->grid = ft_strsplit(inline_map, '\n');
	map->grid_size = ft_tablen(map->grid);
	map->square_size = WALLSIZE;
	map->size = map->grid_size * map->square_size;
	map->minimap.grid_size = map->grid_size;
	init_minimap(&map->minimap);
}
