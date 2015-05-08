/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:28:01 by kcouliba          #+#    #+#             */
/*   Updated: 2014/01/10 16:55:06 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*cpy;

	i = 0;
	cpy = (char*)s;
	while (i < n)
	{
		*(cpy + i) = (unsigned char)c;
		i++;
	}
	return ((void *)s);
}
