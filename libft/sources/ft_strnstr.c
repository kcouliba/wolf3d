/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 00:00:38 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/04 14:54:21 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i1;
	size_t	i2;
	size_t	size;

	i1 = 0;
	if ((size = ft_strlen(s2)) == 0)
		return ((char *)s1);
	while (s1[i1])
	{
		i2 = 0;
		while ((s1[i1 + i2] == s2[i2]) && ((i1 + i2) < n))
		{
			if (i2 == size - 1)
				return ((char *)(s1 + i1));
			++i2;
		}
		++i1;
	}
	return (NULL);
}
