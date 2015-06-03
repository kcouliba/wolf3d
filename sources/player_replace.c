/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 13:41:15 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 13:51:36 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

void	player_replace(t_env *e)
{
	int		posx;
	int		posy;

	posx = e->player.pos.x / e->map.grid_size;
	posy = e->player.pos.y / e->map.grid_size;
}
