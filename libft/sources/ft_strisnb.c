/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:50:05 by kcouliba          #+#    #+#             */
/*   Updated: 2013/12/29 23:50:31 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strisnb(const char *str)
{
	if (!str)
		return (0);
	while (*str)
	{
		if (str[0] == '-')
			str++;
		if (!ft_isdigit(*str))
			return (0);
		str++;
	}
	return (1);
}
