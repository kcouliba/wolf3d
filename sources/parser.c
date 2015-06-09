/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/29 16:29:50 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/09 23:17:47 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wolf3d.h"

static	void	init(t_env *env, char *inline_map)
{
	t_ray		ray;
	size_t		x;

	init_player(&env->player, position);
	init_map(&env->map, mapc);
	(void)inline_map;
	window_init(env);
	ft_putendl("running");
	mlx_loop(env->mlx);
}



t_env			parser(char *filename)
{
//	(void)e;
	if (!filename)
		return (EXIT_ERROR);
	init(&env, NULL);
	return (EXIT_SUCCESS);
}
