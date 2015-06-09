/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:46:06 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/09 23:46:35 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

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

static	int		show_usage(void)
{
	ft_putstr("Usage : ./wolf3d");
	ft_putstr(" [-d]");
	ft_putendl(" [-l level[0-9]]");
	return (EXIT_FAILURE);
}

static	size_t	activate_debug(char **argv)
{
	(void)argv;
	return (EXIT_SUCCESS);
}

static	size_t	get_level(int level)
{
	(void)level;
	return (EXIT_SUCCESS);
}

int				main(int argc, char **argv)
{
	t_env		env;

	ft_putendl("start");
	if (argc < 2)
		return (show_usage());
	env.debug = ((argc > 1) && ft_strequ(argv[1], "--debug")) ? 1 : 0;
	(void)argv;
	return (0);
}
