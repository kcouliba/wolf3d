/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tablen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 18:54:44 by kcouliba          #+#    #+#             */
/*   Updated: 2014/01/24 18:54:49 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_tablen(char **tab)
{
	size_t	len;

	len = 0;
	if (!tab)
		return (len);
	while (tab[len] != '\0')
		len++;
	return (len);
}
