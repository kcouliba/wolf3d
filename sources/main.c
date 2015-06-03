/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:46:06 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 21:22:49 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

int		map[8][8] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 2, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1 }
};

char	mapc[] = "11111111\n10000101\n10000101\n10020101\n10000101\n10000001\n10000001\n11111111\0";

double			raycasting(t_ray ray, t_map map)
{
	t_vector2d	square;
	t_vector2d	side_dist;
	t_vector2d	delta_dist;
	t_vector2d	step;
	size_t		hit;
//	size_t		side;

	(void)map;

	square.x = (int)ray.pos.x;
	square.y = (int)ray.pos.y;
	delta_dist.x = sqrt(1 + (pow(ray.dir.y, 2) / pow(ray.dir.x, 2)));
	delta_dist.y = sqrt(1 + (pow(ray.dir.x, 2) / pow(ray.dir.x, 2)));
	hit = 0;

	step.x = (ray.dir.x > 0) ? 1 : -1;
	step.y = (ray.dir.y > 0) ? 1 : -1;
	side_dist.x = (ray.dir.x < 0) ? (ray.pos.x - square.x) * delta_dist.x
		: (square.x + ray.pos.x + 1.0 - ray.pos.x) * delta_dist.x;
	side_dist.y = (ray.dir.y < 0) ? (ray.pos.y - square.y) * delta_dist.y
		: (square.y + ray.pos.y + 1.0 - ray.pos.y) * delta_dist.y;
	ft_putnbr(side_dist.x);
	ft_putendl(" (side pos x)");
	ft_putnbr(side_dist.y);
	ft_putendl(" (side pos y)");
	return (1.0);
}

static	void	init(t_env *env, char *inline_map)
{
	t_ray		ray;
	size_t		x;

	init_player(&env->player);
	init_map(&env->map, mapc);
	(void)inline_map;
// for each casted ray
	x = 0;
	while (x < WIDTH)
	{
		env->player.camera.pos.x = ((x * 2) / (double)WIDTH) - 1;
//		ft_putnbr(env.player.camera.pos.x * 100);
//		ft_putendl(" (x)");
		ray.pos.x = env->player.pos.x;
		ray.pos.y = env->player.pos.y;
		ray.dir.x = env->player.pos.x;
		ray.dir.y = env->player.pos.y;
		raycasting(ray, env->map);
		++x;
	}

	window_init(env);
	ft_putendl("running");
	mlx_loop(env->mlx);
}

int				main(int argc, char **argv)
{
	t_env		env;

	ft_putendl("start");
	env.debug = ((argc > 1) && ft_strequ(argv[1], "--debug")) ? 1 : 0;
	init(&env, NULL);
	(void)argv;
	return (0);
}
