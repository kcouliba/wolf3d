/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 00:25:16 by kcouliba          #+#    #+#             */
/*   Updated: 2013/12/30 00:25:53 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	i1;
	size_t	i2;

	if (!s1)
		return (NULL);
	if (!s2 || !(ft_strlen((char *)s1) + ft_strlen((char *)s2)))
		return ((char *)s1);
	i1 = 0;
	i2 = 0;
	while (i1 < ft_strlen((char *)s1))
	{
		while (s1[i1 + i2] == s2[i2])
			i2++;
		if (i2 >= ft_strlen((char *)s2))
			return ((char *)&s1[i1]);
		i1++;
		i2 = 0;
	}
	return (NULL);
}
