/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:27:11 by kcouliba          #+#    #+#             */
/*   Updated: 2015/01/22 15:52:13 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*cpysrc;
	char		*cpydest;

	if (n == 0)
		return (NULL);
	cpydest = dest;
	cpysrc = src;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	cpydest += n;
	cpysrc += n;
	while (n--)
		*--cpydest = *--cpysrc;
	return (dest);
}
