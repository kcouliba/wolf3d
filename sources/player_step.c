/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 11:15:57 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 21:14:40 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

static	void	player_wall_collision(t_env *e, t_player end, t_vector2d diff)
{
	t_player	player;
	t_vector2d	d;

	player = e->player;
	if (diff.x > 0)
		d.x = (end.grid_pos.x * WALLSIZE) - end.pos.x - EDGEOFFSET;
	else if (diff.x < 0)
		d.x = ((end.grid_pos.x + 1) * WALLSIZE) - end.pos.x + EDGEOFFSET;
	if (diff.y > 0)
		d.y = (end.grid_pos.y * WALLSIZE) - end.pos.y - EDGEOFFSET;
	else if (diff.y < 0)
		d.y = ((end.grid_pos.y + 1) * WALLSIZE) - end.pos.y + EDGEOFFSET;
	e->player.pos.x = end.pos.x + d.x;
	e->player.pos.y = end.pos.y + d.y;
	update_player_data(e);
}

size_t			player_step_fwd(t_env *e, int keycode)
{
	t_vector2d		diff;
	t_player		end;

	if (!e || (keycode != P_STEPFWD))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Step fwd");
	end.pos.x = e->player.pos.x + (P_STEPSPEED * e->player.dir.x);
	end.pos.y = e->player.pos.y + (P_STEPSPEED * e->player.dir.y);
	end.grid_pos.x = (int)(end.pos.x / e->map.square_size);
	end.grid_pos.y = (int)(end.pos.y / e->map.square_size);
	diff.x = (end.pos.x - e->player.pos.x);
	diff.y = (end.pos.y - e->player.pos.y);
	if (e->map.grid[(int)end.grid_pos.y][(int)end.grid_pos.x] == WALL)
		player_wall_collision(e, end, diff);
	else
	{
		e->player.pos.x += (P_STEPSPEED * e->player.dir.x);
		e->player.pos.y += (P_STEPSPEED * e->player.dir.y);
	}
	return (EXIT_SUCCESS);
}

size_t			player_step_back(t_env *e, int keycode)
{
	t_vector2d		diff;
	t_player		end;

	if (!e || (keycode != P_STEPBACK))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Step back");
	end.pos.x = e->player.pos.x + (P_STEPSPEED * e->player.dir.x);
	end.pos.y = e->player.pos.y + (P_STEPSPEED * e->player.dir.y);
	end.grid_pos.x = (int)(end.pos.x / e->map.square_size);
	end.grid_pos.y = (int)(end.pos.y / e->map.square_size);
	diff.x = (end.pos.x - e->player.pos.x);
	diff.y = (end.pos.y - e->player.pos.y);
	if (e->map.grid[(int)end.grid_pos.y][(int)end.grid_pos.x] == WALL)
		player_wall_collision(e, end, diff);
	else
	{
		e->player.pos.x += (P_STEPSPEED * e->player.dir.x);
		e->player.pos.y += (P_STEPSPEED * e->player.dir.y);
	}
	return (EXIT_SUCCESS);
}

size_t			player_step_left(t_env *e, int keycode)
{
	t_vector2d		diff;
	t_player		end;

	if (!e || (keycode != P_STEPLEFT))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Step left");
	end.pos.x = e->player.pos.x + (P_STEPSPEED * e->player.dir.x);
	end.pos.y = e->player.pos.y + (P_STEPSPEED * e->player.dir.y);
	end.grid_pos.x = (int)(end.pos.x / e->map.square_size);
	end.grid_pos.y = (int)(end.pos.y / e->map.square_size);
	diff.x = (end.pos.x - e->player.pos.x);
	diff.y = (end.pos.y - e->player.pos.y);
	if (e->map.grid[(int)end.grid_pos.y][(int)end.grid_pos.x] == WALL)
		player_wall_collision(e, end, diff);
	else
	{
		e->player.pos.x += (P_STEPSPEED * e->player.dir.x);
		e->player.pos.y += (P_STEPSPEED * e->player.dir.y);
	}
	return (EXIT_SUCCESS);
}

size_t			player_step_right(t_env *e, int keycode)
{
	t_vector2d		diff;
	t_player		end;

	if (!e || (keycode != P_STEPRIGHT))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Step right");
	end.pos.x = e->player.pos.x + (P_STEPSPEED * e->player.dir.x);
	end.pos.y = e->player.pos.y + (P_STEPSPEED * e->player.dir.y);
	end.grid_pos.x = (int)(end.pos.x / e->map.square_size);
	end.grid_pos.y = (int)(end.pos.y / e->map.square_size);
	diff.x = (end.pos.x - e->player.pos.x);
	diff.y = (end.pos.y - e->player.pos.y);
	if (e->map.grid[(int)end.grid_pos.y][(int)end.grid_pos.x] == WALL)
		player_wall_collision(e, end, diff);
	else
	{
		e->player.pos.x += (P_STEPSPEED * e->player.dir.x);
		e->player.pos.y += (P_STEPSPEED * e->player.dir.y);
	}
	return (EXIT_SUCCESS);
}
