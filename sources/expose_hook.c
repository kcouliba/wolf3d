/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expose_hook.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/18 15:48:23 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/08 19:27:02 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

int	expose_hook(t_env *e)
{
	if (!e || !e->img)
		return (0);
	refresh_window(e);
//	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	return (1);
}
