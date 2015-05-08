/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:46:06 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/08 17:25:51 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

int			main(void)
{
	t_env		env;

	ft_putendl("start");
	window_init(&env);
	mlx_loop(env.mlx);
	ft_putendl("stop");
	return (0);
}
