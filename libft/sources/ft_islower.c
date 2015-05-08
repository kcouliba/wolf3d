/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:14:44 by kcouliba          #+#    #+#             */
/*   Updated: 2015/01/22 16:22:42 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_islower(int c)
{
	if ((c < 97) || (c > 122))
		return (0);
	return (1);
}
