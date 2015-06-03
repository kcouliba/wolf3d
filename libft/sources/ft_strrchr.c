/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 00:01:47 by kcouliba          #+#    #+#             */
/*   Updated: 2013/12/30 00:02:24 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*chr;

	if (!s)
		return (NULL);
	chr = (char *)s;
	i = ft_strlen(chr);
	while (i > 0)
	{
		if (chr[i] == c)
			return (&chr[i]);
		i--;
	}
	if (chr[i] == c)
		return (&chr[i]);
	return (NULL);
}
