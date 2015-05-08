/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf3d.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/06 15:23:18 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/08 19:07:17 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF3D_H
# define WOLF3D_H

# include <libft.h>
# include <fcntl.h>
# include <stdio.h>
# include <mlx.h>
# include <math.h>

# define	PROG_NAME		"Wolfd3d"
# define	MAX_FUNC		65365
# define	QUIT			53
# define	ROT_LEFT		123
# define	ROT_RIGHT		124
# define	FORWARD			126
# define	BACK			125
# define	LEFT			65361
# define	RIGHT			65363
# define	WIDTH			640
# define	HEIGHT			400
# define	DIST			((WIDTH / 2) / tan((30 * M_PI) / 180))
# define	SIZE			64
# define	FOV				60
# define	RED				0xFF0000
# define	GREEN			0x00FF00
# define	BLUE			0x0000FF
# define	BLACK			0x000000
# define	WHITE			0xFFFFFF
# define	FLOOR			0
# define	WALL			1
# define	PLAYER			'P'
# define	VALID_CHARS		" 01P\n"

typedef struct          s_tab
{
	int					len;
	char                **tab;
}                       t_tab;

typedef	struct		s_point
{
	int				x;
	int				y;
	int				z;
	size_t			color;
	struct s_point	*next;
}					t_point;

typedef	struct		s_landmark
{
	size_t			radius[4];
	t_point			*orig;
}					t_landmark;

typedef	struct		s_map
{
	char			*line;
	int				width;
	int				height;
	t_tab			*grid;
}					t_map;

typedef	struct		s_line
{
	int				x;
	int				y;
	int				diff_x;
	int				diff_y;
	t_point			orig;
	t_point			dst;
	size_t			color;
}					t_line;

typedef	struct		s_dda
{
	int				x;
	int				y;
	int				step_x;
	int				step_y;
	double			dist_x;
	double			dist_y;
	double			delta_x;
	double			delta_y;
}					t_dda;

typedef	struct		s_ray
{
	t_point			*orig;
	t_point			*hit;
	int				dist;
}					t_ray;

typedef	struct		s_cam
{
	t_point			*pos;
	int				fov;
	int				radius;
}					t_cam;

typedef	struct		s_view
{
	t_cam			*cam;
	int				width;
	int				height;
}					t_view;

typedef	struct		s_env
{
	void			*mlx;
	void			*win;
	void			*img;
	char			*data;
	int				bpp;
	int				linesize;
	int				endian;
	t_view			*view;
	t_map			*grid;
}					t_env;

/*
** mlx functions
*/
void		window_init(t_env *e);
int			expose_hook(t_env *e);
int			key_hook(int keycode, t_env *env);
int			loop_hook(t_env *e);

/*
** map functions
*/
void		init_map(t_map *map);
t_map		*new_map(char **tab);
t_map		*get_grid(char *arg);

/*
** cam functions
*/
void		init_cam(t_cam *cam);
t_cam		*new_cam(t_point *pos, int fov, int radius);
void		del_cam(t_cam *del);

/*
** point functions
*/
void		init_point(t_point *pt);
t_point		*new_point(int x, int y, int z, size_t color);
void		add_lst_point(t_point **lst, t_point pt);
void		del_point(t_point *del);

/*
** vector functions
*/
void		vector_normalize(t_point *vector);

/*
** ray functions
*/
int			raycast(t_cam *cam, int alpha, t_map grid, size_t *color);

/*
** view functions
*/
void		del_view(t_view *del);
t_view		*new_view(t_map grid, t_point pos, int radius);

/*
** dda functions
*/
double		dda(t_tab grid, t_point start, t_point end, size_t *color);

/*
** drawing functions
*/
void		refresh_window(t_env *e);
void		set_img_point_color(t_point pt, t_env *e);
void		draw_line(t_env *env, t_point p_src, t_point p_dst);
void		draw_map(t_env *e);
t_landmark	*new_landmark(t_point *orig, size_t radius);

/*
** debug functions
*/
void		print_dda_datas(t_dda dda);
void		print_point_datas(t_point point);

/*
** moving functions
*/
size_t		rotate(t_env *e, int keycode);

/*
** image functions tests
*/
void		draw_square(t_env *e, size_t x, size_t y, size_t size);

#endif
