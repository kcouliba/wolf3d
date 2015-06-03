/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:55:31 by kcouliba          #+#    #+#             */
/*   Updated: 2015/01/22 16:39:49 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	if (!(map = ft_strnew(ft_strlen((char*)s + 1))))
		return (NULL);
	while (s[i])
	{
		map[i] = f(s[i]);
		i++;
	}
	map[i] = s[i];
	return (map);
}
