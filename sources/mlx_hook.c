/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/13 17:04:28 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 16:26:26 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

static	size_t	quit_program(t_env *env, int keycode)
{
	t_env		*e;

	e  = (t_env*) env;
	if (keycode == QUIT)
	{
		//clear memory then
		mlx_clear_window(e->mlx, e->win);
		mlx_destroy_window(e->mlx, e->win);
		exit(0);
	}
	return (EXIT_SUCCESS);
}

static	size_t	print_key(t_env *env, int keycode)
{
	t_env		*e;

	if (!(e = (t_env*) env))
		return (EXIT_FAILURE);
	ft_putstr("Input : ");
	ft_putnbr(keycode);
	ft_putendl("");
	return (EXIT_SUCCESS);
}

int				expose_hook(t_env *e)
{
	if (!e || !e->img)
		return (EXIT_ERROR);
	mlx_put_image_to_window(e->mlx, e->win, e->img, 0, 0);
	return (EXIT_SUCCESS);
}

int				key_hook(int keycode, t_env *e)
{
	size_t		(*funct[MAX_FUNC])(t_env*, int);
	size_t		i;

	if (!e)
		ft_throw_error(new_error(0, "no environnement", "key_hook", 1), NULL);
	i = 0;
	while (i < MAX_FUNC)
		funct[i++] = print_key;
	funct[P_ROTLEFT] = player_rotate_left;
	funct[P_ROTRIGHT] = player_rotate_right;
	funct[P_STEPFWD] = player_step_fwd;
	funct[P_STEPBACK] = player_step_back;
//	funct[P_STEPLEFT] = player_step_left;
//	funct[P_STEPRIGHT] = player_step_right;
	funct[QUIT] = quit_program;
	if (funct[keycode](e, keycode) != EXIT_ERROR)
		refresh_window(e);
	if (e->debug)
	{
		ft_putendl("----------------------------");
		print_player_pos(&e->player);
		print_player_dir(&e->player);
		print_player_grid_pos(e);
	}
	return (EXIT_SUCCESS);
}

int				loop_hook(t_env *e)
{
	if (!e)
		return (EXIT_FAILURE);
	refresh_window(e);
	expose_hook(e);
	return (EXIT_SUCCESS);
}
