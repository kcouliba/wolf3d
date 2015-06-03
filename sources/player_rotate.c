/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 11:55:17 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 13:39:28 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

size_t				player_rotate_left(t_env *e, int keycode)
{
	if (!e || (keycode != P_ROTLEFT))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Rotate left");
	if ((e->player.alpha + P_ROTSPEED) >= 360)
		e->player.alpha = (e->player.alpha - 360) + P_ROTSPEED;
	else
		e->player.alpha += P_ROTSPEED;
	e->player.dir.x = cos(DEG2RAD(e->player.alpha));
	e->player.dir.y = -sin(DEG2RAD(e->player.alpha));
	return (EXIT_SUCCESS);
}

size_t				player_rotate_right(t_env *e, int keycode)
{
	if (!e || (keycode != P_ROTRIGHT))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Rotate right");
	if ((int)(e->player.alpha - P_ROTSPEED) < 0)
		e->player.alpha = 360 - (e->player.alpha + P_ROTSPEED);
	else
		e->player.alpha -= P_ROTSPEED;
	e->player.dir.x = cos(DEG2RAD(e->player.alpha));
	e->player.dir.y = -sin(DEG2RAD(e->player.alpha));
	return (EXIT_SUCCESS);
}
