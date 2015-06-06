/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 15:23:18 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 21:27:01 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include <libft.h>
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>
# include <math.h>
# include <vector.h>

# define	PROG_NAME		"Wolfd3d"
# define	MAX_FUNC		65365
# define	QUIT			53
# define	P_ROTLEFT		4
# define	P_ROTRIGHT		38
# define	P_STEPFWD		13
# define	P_STEPBACK		1
# define	P_STEPLEFT		0
# define	P_STEPRIGHT		2
# define	P_STEPSPEED		16
# define	P_ROTSPEED		10
# define	EDGEOFFSET		P_STEPSPEED / 2
# define	EAST_DIR		0
# define	WEST_DIR		1
# define	NORTH_DIR		2
# define	SOUTH_DIR		3
# define	WIDTH			320
# define	HEIGHT			(WIDTH / 4) * 3
# define	DIST			(WIDTH / 2) / tan((30 * M_PI) / 180)
# define	WALLSIZE		64
# define	MINIMAPSIZE		100
# define	CAMERAHEIGHT	WALLSIZE / 2
# define	FOV				2 * atan(0.66 / 1.0)
# define	RED				0xFF0000
# define	GREEN			0x00FF00
# define	BLUE			0x0000FF
# define	BLACK			0x000000
# define	WHITE			0xFFFFFF
# define	FLOOR			'0'
# define	WALL			'1'
# define	PLAYER			'P'
# define	VALID_CHARS		" 01P\n"
# define	DEG2RAD(x)		(M_PI * x) / 180
# define	ABS(x)			(x < 0) ? -x : x

typedef struct		s_tab
{
	int					len;
	char				**tab;
}						t_tab;

typedef	struct		s_camera
{
	t_vector2d			pos;
	double				fov;
	int					radius;
}					t_camera;

typedef	struct		s_player
{
	t_vector2d			pos;
	t_vector2d			dir;
	t_vector2d			grid_pos;
	size_t				alpha;
	t_camera			camera;
}					t_player;

typedef	struct		s_ray
{
	t_vector2d			pos;
	t_vector2d			dir;
}					t_ray;

typedef	struct		s_minimap
{
//	char				*string;
//	char				**grid;
	size_t				grid_size;
	size_t				size;
	size_t				square_size;
}					t_minimap;

typedef	struct		s_map
{
	char				*inline_map;
	char				**grid;
	size_t				grid_size;
	size_t				size;
	size_t				square_size;
	t_minimap			minimap;
}					t_map;

typedef	struct		s_env
{
	void				*mlx;
	void				*win;
	void				*img;
	char				*data;
	int					key_pressed[4];
	int					bpp;
	int					linesize;
	int					endian;
	t_player			player;
//	t_view				*view;
	t_map				map;
	size_t				debug;
}					t_env;

/*
** mlx functions
*/
void		window_init(t_env *e);
int			expose_hook(t_env *e);
int			key_hook(int keycode, t_env *env);
int			loop_hook(t_env *e);

/*
** player functions
*/
size_t		player_step_fwd(t_env *e, int keycode);
size_t		player_step_back(t_env *e, int keycode);
size_t		player_step_left(t_env *e, int keycode);
size_t		player_step_right(t_env *e, int keycode);
size_t		player_rotate_left(t_env *e, int keycode);
size_t		player_rotate_right(t_env *e, int keycode);
void		init_player(t_player *player);
void		update_player_data(t_env *e);

/*
** map functions
*/
void		init_map(t_map *map, char *inline_map);

/*
** vector functions
*/
//void		vector2d_normalize(t_vector2d *vector);

/*
** drawing functions
*/
void		refresh_window(t_env *e);
int			mlx_pixel_put_img(t_env *e, t_vector2d *point);

/*
** debug functions
*/
void		print_player_dir(t_player const *player);
void		print_player_pos(t_player const *player);
void		print_player_grid_pos(t_env const *env);

#endif
