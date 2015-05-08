/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinarray.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/08 21:11:20 by kcouliba          #+#    #+#             */
/*   Updated: 2014/01/08 21:13:41 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_isinarray(char *str, char **array)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (array[i])
	{
		if (ft_strequ(str, array[i]))
			return (1);
		i++;
	}
	return (0);
}
