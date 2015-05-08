/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:40:36 by kcouliba          #+#    #+#             */
/*   Updated: 2013/12/29 23:41:10 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strcat(char *dest, const char *src)
{
	size_t	i;
	size_t	start;

	if (!dest || !src)
		return (NULL);
	start = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}
