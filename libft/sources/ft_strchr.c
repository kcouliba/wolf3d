/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:41:28 by kcouliba          #+#    #+#             */
/*   Updated: 2015/01/22 15:58:07 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	if ((char)c == '\0')
		return ((char*)&s[ft_strlen(s)]);
	return ((char*)ft_memchr(s, c, ft_strlen((char*)s)));
}
