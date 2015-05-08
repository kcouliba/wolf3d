/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/29 23:54:57 by kcouliba          #+#    #+#             */
/*   Updated: 2015/02/02 12:21:00 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	if (!s || !*s)
		return (len);
	while (s[len] != '\0')
		len++;
	return (len);
}
