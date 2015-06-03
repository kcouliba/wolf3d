/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 18:55:25 by kcouliba          #+#    #+#             */
/*   Updated: 2015/05/04 12:35:27 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_tabinit(size_t size)
{
	char	**tab;
	size_t	i;

	i = 0;
	if (!size)
		return ((tab = (char**)malloc(sizeof(*tab) * 2)));
	if (!(tab = (char**)malloc(sizeof(*tab) * (size + 1))))
		return (NULL);
	while (i <= size)
	{
		tab[i] = NULL;
		i++;
	}
	return (tab);
}
