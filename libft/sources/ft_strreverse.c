/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/01 01:43:11 by kcouliba          #+#    #+#             */
/*   Updated: 2014/01/01 02:00:25 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strreverse(char *s)
{
	char	*rev;
	size_t	i;
	size_t	r;

	if (!ft_strlen(s))
		return (NULL);
	i = 0;
	r = ft_strlen(s);
	rev = ft_strnew(r);
	while (r)
	{
		rev[i] = s[r - 1];
		i++;
		r--;
	}
	return (rev);
}
