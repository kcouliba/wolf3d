/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/18 22:16:50 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/13 17:15:50 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

static	void	init_img(t_env *e)
{
	if (e->img != NULL)
		mlx_destroy_image(e->mlx, e->img);
	e->img = mlx_new_image(e->mlx, WIDTH, HEIGHT);
	e->data = mlx_get_data_addr(e->img, &e->bpp, &e->linesize, &e->endian);
}

void			refresh_window(t_env *e)
{
	mlx_clear_window(e->mlx, e->win);
	// All the main drawing methods come here
//	draw_map(e);
//	draw_mini_map(e);
}

void			window_init(t_env *e)
{
	e->mlx = mlx_init();
	e->win = mlx_new_window(e->mlx, WIDTH, HEIGHT, PROG_NAME);
	e->img = NULL;
	init_img(e);
	if (!e->win)
		ft_throw_error(new_error(0, "No window created.", "win_init", 1), NULL);
	mlx_expose_hook(e->win, expose_hook, e);
	mlx_loop_hook(e->mlx, loop_hook, e);
	mlx_hook(e->win, 2, 1, key_hook, e);
}
