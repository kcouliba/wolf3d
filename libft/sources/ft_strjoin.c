/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:52:10 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/05 17:26:23 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	int		len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(join = ft_strnew(len)))
		return (ft_strnew(1));
	if (!(join = ft_strcpy(join, s1)))
		return (NULL);
	join = ft_strncat(join, s2, ft_strlen((char*)s2));
	return (join);
}
