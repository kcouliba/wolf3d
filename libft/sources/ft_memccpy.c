/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:23:22 by kcouliba          #+#    #+#             */
/*   Updated: 2014/01/03 17:13:08 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dst;
	char	*source;
	size_t	i;

	dst = (char*)dest;
	source = (char*)src;
	i = 0;
	while (i < n)
	{
		if (source[i] == c)
		{
			dst[i] = source[i];
			return ((void*)&dst[i + 1]);
		}
		dst[i] = source[i];
		i++;
	}
	return (NULL);
}
