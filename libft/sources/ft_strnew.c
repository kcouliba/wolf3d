/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcouliba <kcouliba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 00:00:09 by kcouliba          #+#    #+#             */
/*   Updated: 2013/12/30 00:00:29 by kcouliba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	char	*new;

	new = (char*)ft_memalloc(sizeof(*new) * (size + 1));
	ft_bzero(new, size + 1);
	return (new);
}
