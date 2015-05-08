/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/18 15:50:59 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/08 19:04:58 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

static	size_t	sandbox(t_env *e, int keycode)
{
	if (!e || (keycode < 0))
		ft_throw_error(new_error(0, "no environnement", "sandbox", 1), NULL);
	return (EXIT_SUCCESS);
}

static	size_t	quit_program(t_env *e, int keycode)
{
	if (keycode == QUIT)
	{
		//clear memory then
		mlx_clear_window(e->mlx, e->win);
		mlx_destroy_window(e->mlx, e->win);
		exit(0);
	}
	return (EXIT_SUCCESS);
}

static	void	clean_tab(size_t (**f)(t_env*, int))
{
	size_t	i;

	i = 0;
	while (i < MAX_FUNC)
	{
		f[i] = sandbox;
		i++;
	}
}

static	void	init_functions(size_t (**f)(t_env*, int))
{
	clean_tab(f);
	f[QUIT] = quit_program;
//	f[ROT_LEFT] = rotate;
//	f[ROT_RIGHT] = rotate;
}

int				key_hook(int keycode, t_env *e)
{
	size_t		(*funct[MAX_FUNC])(t_env*, int);
	
	init_functions(funct);
	if (!e)
		ft_throw_error(new_error(0, "no environnement", "key_hook", 1), NULL);
	if (funct[keycode](e, keycode) != EXIT_ERROR)
		refresh_window(e);
	return (EXIT_SUCCESS);
}
