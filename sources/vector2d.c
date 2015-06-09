/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector2d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 22:11:58 by kcouliba          #+#    #+#             */
/*   Updated: 2015/06/09 22:12:31 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wolf3d.h>

void	print_vector(t_vector2d u)
{
	ft_putstr("[");
	ft_putnbr(u.x);
	ft_putstr("][");
	ft_putnbr(u.y);
	ft_putstr("]");
}