/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/28 00:21:30 by kcouliba          #+#    #+#             */
/*   Updated: 2015/02/03 13:49:57 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static size_t	ft_nbstrlen(int nb)
{
	size_t	len;

	len = 1;
	while (nb / 10)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char			*ft_itoa(int nb)
{
	char	*itoa;
	size_t	i;
	int		neg;

	if (!nb)
		return (ft_strdup("0"));
	if (nb == -2147483648)
		return (ft_strdup("-2147483648"));
	i = ft_nbstrlen(nb);
	itoa = ft_strnew(i);
	neg = ((nb < 0) ? -1 : 1);
	i += ((neg == -1) ? 1 : 0);
	nb *= neg;
	itoa[i] = '\0';
	while (i--)
	{
		itoa[i] = ((nb % 10) + 48);
		nb /= 10;
	}
	if (neg < 0)
		itoa[0] = '-';
	return (itoa);
}
