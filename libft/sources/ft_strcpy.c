/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:45:12 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/04 13:15:27 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	len;

	if (!src)
		return (dest);
	len = ft_strlen((char*)src) + 1;
	return ((char*)ft_memcpy(dest, src, len));
}
