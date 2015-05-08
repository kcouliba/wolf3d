/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 00:27:40 by kcouliba          #+#    #+#             */
/*   Updated: 2015/02/03 15:34:33 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	char	*trim;
	size_t	len;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	start = 0;
	while ((!ft_isprint(s[start]) || s[start] == 32) && s[start] != '\0')
		++start;
	len = ft_strlen((char *)s);
	while ((!ft_isprint(s[len]) || s[len] == 32) && len > start)
		--len;
	len -= start - 1;
	if (!(trim = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (i < len)
	{
		trim[i] = s[i + start];
		++i;
	}
	trim[i] = '\0';
	return (trim);
}
