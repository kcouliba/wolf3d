/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:24:46 by kcouliba          #+#    #+#             */
/*   Updated: 2015/01/22 15:23:35 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*cpy;

	if (!s)
		return (NULL);
	cpy = (const unsigned char*)s;
	while (n--)
	{
		if (*cpy == (unsigned char)c)
			return ((void*)cpy);
		cpy++;
	}
	return (NULL);
}
