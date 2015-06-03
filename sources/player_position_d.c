/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_position_d.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/03 12:01:48 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/03 14:25:23 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

void	print_player_pos(t_player const *player)
{
	ft_putstr("Player pos[");
	ft_putnbr(player->pos.x);
	ft_putstr("][");
	ft_putnbr(player->pos.y);
	ft_putendl("]");
}

void	print_player_dir(t_player const *player)
{
	ft_putstr("Player dir (x1000)[");
	ft_putnbr(player->dir.x * 1000);
	ft_putstr("][");
	ft_putnbr(player->dir.y * 1000);
	ft_putendl("]");
	ft_putstr("Player alpha : ");
	ft_putnbr(player->alpha);
	ft_putendl(".");
}

void	print_player_grid_pos(t_env const *e)
{
	ft_putstr("Player grid pos[");
	ft_putnbr(e->player.pos.x / e->map.square_size);
	ft_putstr("][");
	ft_putnbr(e->player.pos.y / e->map.square_size);
	ft_putendl("]");
}
