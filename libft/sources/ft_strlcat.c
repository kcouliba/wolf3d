/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:53:55 by kcouliba          #+#    #+#             */
/*   Updated: 2015/02/02 14:27:35 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	start;
	size_t	len;

	start = ft_strlen(dest);
	len = size + ft_strlen((char *)src);
	i = 0;
	if (size == 0)
		return (len);
	while ((start + i) < (size - 1))
	{
		dest[start + i] = src[i];
		if (src[i] == '\0')
			return (start + i);
		i++;
	}
	if (start + ft_strlen((char *)src) == size)
		return (size);
	return (len);
}
