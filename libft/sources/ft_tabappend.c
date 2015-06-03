/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/24 18:56:01 by kcouliba          #+#    #+#             */
/*   Updated: 2014/01/24 18:56:15 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_tabappend(char **tab, char *s)
{
	char	**append;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_tablen(tab);
	append = ft_tabinit(len + 1);
	while (i < len)
	{
		if (!ft_strlen(tab[i]))
			append[i] = NULL;
		else
			append[i] = ft_strdup(tab[i]);
		i++;
	}
	append[i] = ft_strdup(s);
	return (append);
}
