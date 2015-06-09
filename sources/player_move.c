/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 17:19:27 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/09 22:24:31 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

static	void	wall_collision(t_env *e, t_vector2d next_pos)
{
	t_vector2d	coord;
	t_vector2d	oob;
	t_vector2d	square;

	coord.x = (int)next_pos.x / WALLSIZE;
	coord.y = (int)next_pos.y / WALLSIZE;
	oob.x = 0;
	oob.y = 0;
	square.x = (coord.x + 1) * WALLSIZE;
	square.y = (coord.y + 1) * WALLSIZE;
	if (e->map.grid[(int)coord.y][(int)coord.x] == WALL)
	{
		if ((e->player.pos.x - next_pos.x) > 0)
			oob.x = square.x - next_pos.x + 1;
		else if ((e->player.pos.x - next_pos.x) < 0)
			oob.x = square.x - WALLSIZE - next_pos.x - 1;
		if ((e->player.pos.y - next_pos.y) > 0)
			oob.y = square.y - next_pos.y + 1;
		else if ((e->player.pos.y - next_pos.y) < 0)
			oob.y = square.y - WALLSIZE - next_pos.y - 1;
	}
	e->player.pos = vector2d_add(next_pos, oob);
}

void			player_move(t_env *e, double way)
{
	t_vector2d	*pl_pos;
	t_vector2d	next_player_pos;
	t_vector2d	step;

	pl_pos = &e->player.pos;
	step.x = e->player.dir.x * P_STEPSPEED * way;
	step.y = e->player.dir.y * P_STEPSPEED * way;
	next_player_pos = vector2d_add(*pl_pos, step);
	ft_putstr("next player position : ");
	print_vector(next_player_pos);
	ft_putchar('\n');
	wall_collision(e, next_player_pos);
	e->player.grid_pos.x = (int)(e->player.pos.x / e->map.square_size);
	e->player.grid_pos.y = (int)(e->player.pos.y / e->map.square_size);
}
