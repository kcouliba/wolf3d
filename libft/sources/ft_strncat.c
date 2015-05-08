/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:57:35 by kcouliba          #+#    #+#             */
/*   Updated: 2015/02/02 14:32:21 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	start;

	if (!dest || !src)
		return (NULL);
	start = ft_strlen(dest);
	i = 0;
	while (i < n)
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}
