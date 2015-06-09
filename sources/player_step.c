/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_step.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 17:19:41 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/09 22:21:30 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

size_t			player_step_fwd(t_env *e, int keycode)
{
	if (!e || (keycode != P_STEPFWD))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Step fwd");
	player_move(e, P_MOVEFWD);
	return (EXIT_SUCCESS);
}

size_t			player_step_back(t_env *e, int keycode)
{
	if (!e || (keycode != P_STEPBACK))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Step back");
	player_move(e, P_MOVEBWD);
	return (EXIT_SUCCESS);
}

size_t			player_step_left(t_env *e, int keycode)
{
	if (!e || (keycode != P_STEPLEFT))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Step left");
	player_move(e, P_MOVELEFT);
	return (EXIT_SUCCESS);
}

size_t			player_step_right(t_env *e, int keycode)
{
	if (!e || (keycode != P_STEPRIGHT))
		return (EXIT_FAILURE);
	if (e->debug)
		ft_putendl("Step right");
	player_move(e, P_MOVERIGHT);
	return (EXIT_SUCCESS);
}
