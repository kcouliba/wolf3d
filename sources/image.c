/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 19:05:31 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/08 20:05:54 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

void	draw_square(t_env *e, size_t x, size_t y, size_t size)
{
	size_t		i;
	size_t		j;

	e->data = mlx_get_data_addr(e->img, &e->bpp, &e->linesize, &e->endian);
	ft_putendl(e->data);
	ft_putendl(" <- data");
	ft_putnbr(e->bpp);
	ft_putendl(" <- bpp");
	ft_putnbr(e->linesize);
	ft_putendl(" <- linesize");
	ft_putnbr(e->endian);
	ft_putendl(" <- endian");
//	(void)i;
	(void)x;
	(void)y;
	(void)size;

	j = 0;
	while (j < HEIGHT)
	{
		i = 0;
		while (i < WIDTH)
		{
			e->data[(j * e->linesize) + (i * e->bpp)] = mlx_get_color_value(e->mlx, BLUE);
//			e->data[i * e->bpp + e->linesize] = mlx_get_color_value(e->mlx, BLUE);
			++i;
		}
		++j;
	}
}
