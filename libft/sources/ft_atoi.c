/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:08:46 by kcouliba          #+#    #+#             */
/*   Updated: 2015/02/03 13:51:23 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_atoi(const char *str)
{
	char	*cpy;
	size_t	i;
	int		atoi;
	int		neg;

	cpy = (char*)str;
	i = 0;
	while (cpy[i] < 48 && cpy[i] != 43 && cpy[i] != 45)
	{
		if (cpy[i] <= 0)
			return (0);
		++i;
	}
	neg = ((cpy[i] == '-') ? -1 : 1);
	i += (((cpy[i] == '-') || (cpy[i] == '+')) ? 1 : 0);
	atoi = 0;
	while (cpy[i] != '\0')
	{
		if (!ft_isdigit(cpy[i]))
			break ;
		atoi = (10 * atoi) + (cpy[i] - 48);
		i++;
	}
	return (atoi * neg);
}
