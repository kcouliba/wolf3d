/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 21:05:25 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 21:09:24 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

void			update_player_data(t_env *e)
{
	e->player.grid_pos.x = (int)(e->player.pos.x / e->map.square_size);
	e->player.grid_pos.y = (int)(e->player.pos.y / e->map.square_size);
//	player->camera.pos.x = 0;
//	player->camera.pos.y = 0.66;
}

void			init_player(t_player *player)
{
	player->pos.x = 4 * WALLSIZE; //
	player->pos.y = 4 * WALLSIZE; //
	player->alpha = 90;
	player->dir.x = cos(DEG2RAD(player->alpha));
	player->dir.y = -sin(DEG2RAD(player->alpha));
	player->grid_pos.x = (int)(player->pos.x / WALLSIZE);
	player->grid_pos.y = (int)(player->pos.y / WALLSIZE);
	player->camera.pos.x = 0;
	player->camera.pos.y = 0.66;
}
