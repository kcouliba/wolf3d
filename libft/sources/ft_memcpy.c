/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:22:29 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/04 12:49:10 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dst;
	char	*source;
	size_t	i;

	dst = (char*)dest;
	source = (char*)src;
	i = 0;
	while (i < n)
	{
		dst[i] = source[i];
		i++;
	}
	return ((void*)dst);
}
